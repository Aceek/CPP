/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 05:22:53 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/27 00:45:29 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
 public:
	Point();
	Point(const float x, const float y);
	~Point();
	Point(const Point &point);

	Point	&operator=(const Point &point);

	const Fixed	&getX(void) const;
	const Fixed	&getY(void) const;

 private:
	const Fixed _x;
	const Fixed _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif  // POINT_HPP_
