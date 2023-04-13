/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:02:46 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/13 19:32:44 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	 *this = copy;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = value * (1 << this->_fractionalBits);
}

Fixed::Fixed(const float value) :
		_value(roundf(value * (1 << this->_fractionalBits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_value = other.getRawBits();
	}
	return (*this);
}

int		Fixed::getRawBits() const {
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float	Fixed::toFloat(void) const {
	float	floatNb;

	floatNb = static_cast<float>(this->getRawBits()) /
		static_cast<float>(1 << _fractionalBits);
	return (floatNb);
}

int	Fixed::toInt(void) const {
	// this->_value >> _fractionalBits == this->_value / (1 << _fractionalBits);
	return (this->_value >> _fractionalBits);
}


