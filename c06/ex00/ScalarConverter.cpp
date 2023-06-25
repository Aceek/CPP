/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 03:42:31 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/25 05:49:17 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {};
ScalarConverter::~ScalarConverter() {};

ScalarConverter::ScalarConverter(const ScalarConverter &other) {
	*this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
	(void)other;
	return (*this);
}

bool	ScalarConverter::isValidInput(const std::string &litteral) {
	int					dot = 0;
	long unsigned int	i = 0;
	long unsigned int	max = litteral.length();

	if (litteral.empty())
		return (false);
	if (litteral.size() == 1 || litteral == "-inf" || litteral == "inf" || litteral == "+inf"
			|| litteral == "nan" || litteral == "nanf" || litteral == "-inff"
			|| litteral == "inff" || litteral == "+inff")
		return (true);
	if (litteral[0] == '-' || litteral[0] == '+')
		i++;
	while  (std::isdigit((litteral[i])) || litteral[i] == '.') {
		if (litteral[i] == '.') {
			dot++;
			if (i == 0 || !std::isdigit(litteral[i - 1]))
				return (false);
		}
		i++;
	}
	if (i < max && litteral[i] == 'f')
		i++;
	if (dot > 1 || i != max || litteral[max - 1] == '.'
				|| ( max >= 2 && litteral[max - 1] == 'f' && litteral[max - 2] == '.'))
		return (false);
	return (true);
}

bool	ScalarConverter::displayIfChar(const std::string& litteral) {
	
	if (litteral[0] && !litteral[1] && !std::isdigit(litteral[0])) {
		if (std::isprint(litteral[0])) {
			std::cout << "char : '" << litteral[0] << "'" << std::endl;
		} else {
			std::cout << "char : Non displayable" << std::endl;
		}
		std::cout << "int : " << static_cast<int>(litteral[0]) << std::endl;
		std::cout << "float : " << static_cast<float>(litteral[0]) << ".0f" << std::endl;
		std::cout << "double : " << static_cast<double>(litteral[0]) << ".0" << std::endl;
		return (true);
	}
	return (false);
}

void	ScalarConverter::displayChar(const double nb) {
	char c = static_cast<char>(nb);

	if (!std::isfinite(nb) || nb > CHAR_MAX || nb < CHAR_MIN) {
		std::cout << "char : Impossible" << std::endl;
	} else if (!std::isprint(c)) {
		std::cout << "char : Non displayable" << std::endl;
	} else {
		std::cout << "char : '" << c << "'" << std::endl; 
	}
}

void	ScalarConverter::displayInt(const double nb) {
	if (!std::isfinite(nb) || nb > INT_MAX || nb < INT_MIN) {
		std::cout << "int : Impossible" << std::endl;
	} else {
		std::cout << "int : " << static_cast<int>(nb) << std::endl;
	}
}

void	ScalarConverter::displayFloat(const double nb) {
	int	compare = static_cast<int>(nb);
	if (nb == compare) {
		std::cout << "float : " << static_cast<float>(nb) << ".0f" << std::endl;
	} else {
		std::cout << "float : " << static_cast<float>(nb) << "f" << std::endl;
	}
}

void	ScalarConverter::displayDouble(const double nb) {
	int compare = static_cast<int>(nb);
	
	if (compare == nb) {
		std::cout << "double : " << nb << ".0" << std::endl;
	} else {
		std::cout << "double : " << nb << std::endl;
	}
}

void	ScalarConverter::convert(std::string litteral) {

	double	nb;
	if (displayIfChar(litteral)) {
		return ;
	}

	nb = std::atof(litteral.c_str());
	displayChar(nb);
	displayInt(nb);
	displayFloat(nb);
	displayDouble(nb);
	
}
