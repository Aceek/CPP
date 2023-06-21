/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 03:17:07 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/21 04:42:29 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>

bool			isValidInput(std::string litteral);


class ScalarConverter {
 public:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter &operator=(const ScalarConverter &other);


	void	static	convert(std::string litteral);
	
 private:
	static int		_int;
	static float	_float;
	static double	_double;
	static char		_char;
};
