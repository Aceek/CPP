/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:55:33 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/21 05:45:51 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C02_EX00_FIXED_HPP_
#define C02_EX00_FIXED_HPP_

#include <iostream>

class Fixed {
 private:
	int	_value;
	const int	_fractionalBits;
 public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed	&operator=(const Fixed &other);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif  // C02_EX00_FIXED_HPP_
