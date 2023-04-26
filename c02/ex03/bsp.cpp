/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 03:13:42 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/26 04:03:23 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static	Fixed abs(Fixed x) {
    return (x < 0 ? x * -1 : x);
}

  // areaformula = abs((A.x*(B.y-C.y) + B.x*(C.y-A.y) + C.x*(A.y-B.y))/2)
static	Fixed   area(Point const a, Point const b, Point const c) {
    Fixed area =	((a.getX() * (b.getY() - c.getY())) +
             		(b.getX() * (c.getY() - a.getY())) +
            		(c.getX() * (a.getY() - b.getY())));
	return abs(area/2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed   abcArea = area(a, b, c);
    Fixed   pabArea = area(point, a, b);
    Fixed   pbcArea = area(point, b, c);
    Fixed   pcaArea = area(point, c, a);
	
	if (abcArea == pabArea + pbcArea + pcaArea) {
		return true;
	} else {
		return false;
	}
}