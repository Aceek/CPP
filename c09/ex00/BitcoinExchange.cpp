/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 05:40:59 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/15 09:03:24 by ilinhard         ###   ########.fr       */
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
	while (getline(file, line)) {
   		std::istringstream	iss(line);
		std::string			date;
		double				rate;

		std::getline(iss, date, ',');
		iss >> rate;
		if (!date.empty() && iss && (iss.peek() == EOF || iss.peek() == '\n')
				&& ValidateDate(date)) {
			this->exchangeRates[date] = rate;
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
		this->exchangeRates = other.exchangeRates;
	}
	return (*this);
}


void	BitcoinExchange::PrintMap() {
	std::map<std::string, double>::iterator it;

	for (it = this->exchangeRates.begin(); it != this->exchangeRates.end(); it++) {
		std::cout << "data = " << it->first << " Rate = " << it->second << std::endl;
	}
	
}

bool	BitcoinExchange::ValidateValue(const double &rate) const {
	if (rate < 0 || rate > 1000) {
		std::cerr << "Rate value not contain between 0 and 1000." << std::endl; 
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
	it = this->exchangeRates.lower_bound(date);
	if (it != exchangeRates.end()) {
		return (it->second);
	} else if (!exchangeRates.empty()) {
		return ((--it)->second);
	}
	return (-1);
}


bool	BitcoinExchange::EraseSpace(std::string &line) {
	bool nb_space = false;

	std::string::size_type delimiter = line.find("|");
	if (delimiter != std::string::npos) {
		if (delimiter > 0 && line[delimiter - 1] == ' ' && delimiter + 1 < line.length() && line[delimiter + 1] == ' ')
			nb_space = true;
	}
	
	for (size_t i = 0; i < line.size(); i++) {
		if (line[i] == ' ') {
			line.erase(i, 1);
			--i;
		}
	}
	return (nb_space);
}

void	BitcoinExchange::ProcessInput(const std::string &filename) {
	std::ifstream	file(filename.c_str());
	std::string		line;

	if (!file.is_open()) {
		throw std::runtime_error("Error: Failed to open file: " + filename);
	}

	std::getline(file, line);  // skip header line
	while (getline(file, line)) {
		std::string			date;
		std::string			line_cpy = line;
		double				value;
		double				rate;
		bool				nb_space = EraseSpace(line);
   		std::istringstream	iss(line);

		std::getline(iss, date, '|');
		iss >> value;
		rate = GetExchangeRate(date);
		if (rate == -1) {
			std::cerr << "Can't find rate change in database" << std::endl;
		} else if (!date.empty() && iss && (iss.peek() == EOF || iss.peek() == '\n') && nb_space
				&& ValidateDate(date) && ValidateValue(value) && rate != -1) {
					std::cout << date << " => " << value << " = "
							<< value * rate << std::endl;
		} else {
			std::cerr << "Error: format in inputfile =>"  << line_cpy << std::endl;
		}
	}
	
}