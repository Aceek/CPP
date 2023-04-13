/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:55:33 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/14 00:10:07 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP_
# define FIXED_HPP_

#include <iostream>
#include <cmath>

class Fixed {
 private:
	int	_value;
	static const int	_fractionalBits = 8;

 public:
	Fixed(void);
	Fixed(const Fixed &copy);
	explicit Fixed(const int value);
	explicit Fixed(const float value);

	~Fixed(void);

	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	Fixed	&operator=(const Fixed &other);

	bool	operator<(const Fixed &other) const;
	bool	operator>(const Fixed &other) const;
	bool	operator==(const Fixed &other) const;
	bool	operator!=(const Fixed &other) const;
	bool	operator<=(const Fixed &other) const;
	bool	operator>=(const Fixed &other) const;

	Fixed	operator+(const Fixed &other) const;
	Fixed	operator-(const Fixed &other) const;
	Fixed	operator*(const Fixed &other) const;
	Fixed	operator/(const Fixed &other) const;

	Fixed	&operator++(void);
	Fixed	&operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);

	static Fixed &min(Fixed &f1, Fixed &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);
	static const Fixed &min(const Fixed &f1, const Fixed &f2);
	static const Fixed &max(const Fixed &f1, const Fixed &f2);
};

#endif  // FIXED_HPP_
