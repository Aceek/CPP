/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 03:13:42 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/27 10:26:08 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	getVector(Point vec1, Point vec2, Point point)
{
	Fixed res = ((vec1.getX() - point.getX()) * (vec2.getY() - point.getY())
	- (vec1.getY() - point.getY()) * (vec2.getX() - point.getX()));

	return (res);
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	Fixed	res1 = getVector(a, b, point);
	Fixed	res2 = getVector(b, c, point);
	Fixed	res3 = getVector(c, a, point);

	if ((res1 >= 0 && res2 >= 0 && res3 >= 0)
		|| (res1 <= 0 && res2 <= 0 && res3 <= 0))
		return (1);
	return (0);
}