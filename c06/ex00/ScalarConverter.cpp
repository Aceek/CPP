/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 03:42:31 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/21 05:21:58 by ilinhard         ###   ########.fr       */
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

bool	isValidInput(std::string litteral) {
	int					dot = 0;
	long unsigned int	i = 0;
	long unsigned int	max = litteral.length();

	if (litteral.empty())
		return (false);
	if (litteral.size() == 1)
		return (true);
	if (litteral == "-inf" || litteral == "inf" || litteral == "+inf"
			|| litteral == "nan" || litteral == "nanf" || litteral == "-inff"
			|| litteral == "inff" || litteral == "+inff")
		return (true);
	if (litteral[0] == '-' || litteral[0] == '+')
		i++;
	while  (isdigit(litteral[i]) || litteral[i] == '.') {
		if (litteral[i] == '.')
			dot++;
		i++;
	}
	if (litteral[i] == 'f')
		i++;
	if (dot > 1 || i != max || litteral[max - 1] == '.'
				|| (litteral[max- 1] == 'f' && litteral[max - 2] == '.') )
		return (false);
	return (true);
}


void	ScalarConverter::convert(std::string litteral) {

	if (isValidInput(litteral))	{
		std::cout << "OUI !! " << std::endl;
	} else {
		std::cout << "NON !! " << std::endl;
	}
}

	int ScalarConverter::_int = 0;
	float ScalarConverter::_float = 0.0f;
	double ScalarConverter::_double = 0.0;
	char ScalarConverter::_char = '\0';