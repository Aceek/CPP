/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 03:17:07 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/27 09:06:08 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C06_EX00_SCALARCONVERTER_HPP_
#define C06_EX00_SCALARCONVERTER_HPP_

#include <iostream>
#include <climits>
#include <cstdlib>
#include <cmath>

class ScalarConverter {
 public:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter &operator=(const ScalarConverter &other);


	void static	convert(std::string litteral);
	bool static isValidInput(const std::string& litteral);
	bool static	displayIfChar(const std::string&	litteral);
	void static	displayChar(const double nb);
	void static	displayInt(const double nb);
	void static	displayFloat(const double nb);
	void static	displayDouble(const double nb);
	
 private:
};

#endif  // C06_EX00_SCALARCONVERTER_HPP_
