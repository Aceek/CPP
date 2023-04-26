/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:02:46 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/26 03:37:56 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed &copy) {
	 *this = copy;
}

Fixed::Fixed(const int value) {
	this->_value = value * (1 << this->_fractionalBits);
}

Fixed::Fixed(const float value) :
		_value(roundf(value * (1 << this->_fractionalBits))) {
}

Fixed	&Fixed::operator=(const Fixed &other) {
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
	return (this->_value >> _fractionalBits);
}

bool	Fixed::operator<(const Fixed &other) const {
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator>(const Fixed &other) const {
	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator==(const Fixed &other) const {
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed &other) const {
	return (this->getRawBits() != other.getRawBits());
}

bool	Fixed::operator<=(const Fixed &other) const {
	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator>=(const Fixed &other) const {
	return (this->getRawBits() >= other.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &other) const {
	Fixed		tmp;
	const int	sum = this->getRawBits() + other.getRawBits();
	tmp.setRawBits(sum);
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &other) const {
	Fixed		tmp;
	const int	sum = this->getRawBits() - other.getRawBits();
	tmp.setRawBits(sum);
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &other) const {
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other) const {
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed	&Fixed::operator++(void) {
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	&Fixed::operator--(void) {
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	++(*this);
	return (tmp);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);
	--(*this);
	return (tmp);
}

const Fixed	&Fixed::min(const Fixed &f1, const  Fixed &f2) {
	return (f1 < f2 ? f1 : f2);
}

const Fixed	&Fixed::max(const Fixed &f1, const  Fixed &f2) {
	return (f1 > f2 ? f1 : f2);
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2) {
	return (f1 < f2 ? f1 : f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2) {
	return (f1 > f2 ? f1 : f2);
}
