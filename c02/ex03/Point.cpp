/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 05:27:25 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/26 04:02:59 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(Fixed(0)), _y(Fixed(0)) {}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) {}

Point::~Point() {}

Point::Point(const Point &point) {
	*this = point;
}

Point	&Point::operator=(const Point & rhs)
{
    if(this != &rhs)
    {
        Fixed *ptrx = const_cast<Fixed*>(&this->_x);
        Fixed *ptry = const_cast<Fixed*>(&this->_y);
        *ptrx = rhs._x;
        *ptry = rhs._y;
    }
    return (*this);
}

const Fixed	&Point::getX(void) const {
	return (this->_x);
}

const Fixed	&Point::getY(void) const {
	return (this->_y);
}
