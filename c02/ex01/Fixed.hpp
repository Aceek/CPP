/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:55:33 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/27 01:20:04 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C02_EX01_FIXED_HPP_
#define C02_EX01_FIXED_HPP_

#include <iostream>
#include <cmath>

class Fixed {
 private:
	int					_value;
	static const int	_fractionalBits = 8;
 public:
				Fixed(void);
	explicit	Fixed(const int value);
	explicit	Fixed(const float value);
	explicit	Fixed(const Fixed &copy);
				~Fixed(void);

	float		toFloat(void) const;
	int			toInt(void) const;
	Fixed		&operator=(const Fixed &other);
	int			getRawBits(void) const;
	void		setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);


#endif  // C02_EX01_FIXED_HPP_
