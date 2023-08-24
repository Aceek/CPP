/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 05:34:09 by ilinhard          #+#    #+#             */
/*   Updated: 2023/08/24 15:19:47 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _C09_EX00_BITCOINEXCHANGE_HPP_
#define _C09_EX00_BITCOINEXCHANGE_HPP_

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

class BitcoinExchange {
 private:
	std::map<std::string, double> _exchangeRates;

 public:
	BitcoinExchange(const std::string &filename);
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &other);
	BitcoinExchange &operator=(const BitcoinExchange &other);

	bool	ValidateValue(const double &rate) const;
	bool	ValidateDate(std::string &date) const;
	void	PrintMap();
	void	ProcessInput(const std::string &filename);
	double	GetExchangeRate(const std::string &date) const;
	bool	ValidateSpace(const std::string &line) const;
	
};

#endif  // _C09_EX00_BITCOINEXCHANGE_HPP_
