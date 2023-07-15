/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 05:40:59 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/15 09:55:08 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string &filename) {
	
	std::ifstream file(filename.c_str());
	
	if (!file.is_open()) {
		throw std::runtime_error("Error: Failed to open file: " + filename);
	}
	
	std::string line;
	std::getline(file, line); // skip header
	if (line != "date,exchange_rate") {
		throw std::runtime_error("Error : Invalid header, format must be : "
				"\"date,exchange_rate\" in database");
	}
	while (getline(file, line)) {
   		std::istringstream	iss(line);
		std::string			date;
		double				rate;

		std::getline(iss, date, ',');
		iss >> rate;
		if (!date.empty() && iss && (iss.peek() == EOF || iss.peek() == '\n')
				&& ValidateDate(date)) {
			this->_exchangeRates[date] = rate;
		} else {
			std::cerr << "Error: format in database =>"  << line << std::endl;
		}
	}
	file.close();
}

BitcoinExchange::~BitcoinExchange(){};

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
	if (this != &other) {
		this->_exchangeRates = other._exchangeRates;
	}
	return (*this);
}


void	BitcoinExchange::PrintMap() {
	std::map<std::string, double>::iterator it;

	for (it = this->_exchangeRates.begin(); it != this->_exchangeRates.end(); it++) {
		std::cout << "data = " << it->first << " Rate = " << it->second << std::endl;
	}
	
}

bool	BitcoinExchange::ValidateValue(const double &rate) const {
	if (rate < 0 || rate > 1000) {
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::ValidateDate(std::string &date) const {
	if (date.size() != 10 || date[4] != '-' || date[7] != '-') {
		return (false);
	}
	for (size_t i = 0; i < date.size(); i++) {
		char c = date[i];
		if ((i == 4 && c == '-') || (i == 7 && c == '-') || std::isdigit(c)) {
			continue;
		} else {
			return (false);
		}
	}
	int year, mouth, day;
	sscanf(date.c_str(), "%d-%d-%d", &year, &mouth, &day);
	if (year < 0 || mouth < 1 || mouth > 12 || day < 1 || day > 31) {
		return (false);
	}
	if ((mouth == 4 || mouth == 6 || mouth == 9 || mouth == 11) && day > 30) {
		return (false);
	}
	if (mouth == 2) {
		bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
		if ((isLeapYear && day > 29) || (!isLeapYear && day > 28)) {
			return (false);
		}
	}
	return (true);
}

double	BitcoinExchange::GetExchangeRate(const std::string &date) const {
	std::map<std::string, double>::const_iterator it;
	it = this->_exchangeRates.lower_bound(date);
	if (it != _exchangeRates.end()) {
		return (it->second);
	} else if (!_exchangeRates.empty()) {
		return ((--it)->second);
	}
	return (-1);
}

bool	BitcoinExchange::ValidateSpace(const std::string &line) const {
	std::string::size_type	delimiter = line.find("|");
	int						count = 0;

	for (size_t i = 0; i < line.size(); i++) {
		if (line[i] == ' ') {
			count++;
		}
	}
	if (count != 2) {
		return (false);
	}
	if (delimiter != std::string::npos) {
		if ((delimiter > 0 && line[delimiter - 1] != ' ') || (delimiter + 1
				< line.length() && line[delimiter + 1] != ' ')) {
					return (false);
		}
	}
	return (true);
}

void	BitcoinExchange::ProcessInput(const std::string &filename) {
	std::ifstream	file(filename.c_str());
	std::string		line;

	if (!file.is_open()) {
		throw std::runtime_error("Error: Failed to open file: " + filename);
	}

	std::getline(file, line);  // skip header line
	if (line != "date | value") {
		std::cerr << "Invalid header, format should be : \"date | value\"" << 
				"in input file" << std::endl;
		return ;
	}
	while (getline(file, line)) {
		std::string			date;
		char				del;
		double				value;
		double				rate;
   		std::istringstream	iss(line);

		if (!(iss >> date >> del >> value)) {
			std::cerr << "Error parsing input line : " << line <<  std::endl;
			continue;
		}
		if (!ValidateDate(date)) {
			std::cerr << "Error date invalid in input file : " << line << std::endl;
			continue;
		}
		if (!ValidateValue(value)) {
			std::cerr << "Error value not contain between [1-1000] : " << line << std::endl;
			continue;
		}
		rate = GetExchangeRate(date);
		if (rate == -1) {
			std::cerr << "Error in rate exchange" << line << std::endl;
			continue;
		}
		if (!ValidateSpace(line)) {
			std::cerr << "Error space not good format : " << line << std::endl;
		}
		std::cout << date << " => " << value << " = " << value * rate << std::endl;
	}
}