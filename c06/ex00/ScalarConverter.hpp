/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 03:17:07 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/25 05:43:29 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <climits>
#include <cstdlib>
#include <cmath>

bool	isValidInput(const std::string& litteral);
bool	displayIfChar(const std::string&	litteral);
void	displayChar(const double nb);
void	displayInt(const double nb);
void	displayFloat(const double nb);
void	displayDouble(const double nb);


class ScalarConverter {
 public:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter &operator=(const ScalarConverter &other);


	void	static	convert(std::string litteral);
	
 private:
};
