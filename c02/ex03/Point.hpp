/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 05:22:53 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/25 06:23:40 by ilinhard         ###   ########.fr       */
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

 private:
	const Fixed _x;
	const Fixed _y;
};


#endif  // POINT_HPP_