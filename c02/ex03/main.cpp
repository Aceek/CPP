/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:45:51 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/27 10:44:34 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void) {
	Point point0[3] = {Point(0, 0), Point(0, 10), Point(10, 0)};
	Point point1[3] = {Point(14.1f, 0), Point(8.654f, 5.1584f),
			Point(12.456f, 5.334f)};
	Point point2[3] = {Point(-3.1f, 11.4f), Point(-2.4f, 9.1f),
			Point(-0.4f, 10.8f)};
	Point point3[3] = {Point(51.8f, -64.9f), Point(-20.4f, -17.7f),
			Point(43.954f, 1.754f)};

    Point inside0(5, 5);
    Point inside1(9.8f, 4.5f);
    Point inside2(-1.9, 10.9);
    Point inside3(20.354f, -16.8645);

    Point outside0(20, 20);
    Point outside1(11.7, -0.654f);
    Point outside2(-3.7f, 9.1f);
    Point outside3(16.4f, 4.1f);

    if (bsp(point0[0], point0[1], point0[2], inside0)) {
        std::cout << "Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Point is outside the triangle." << std::endl;
    }

    if (bsp(point0[0], point0[1], point0[2], outside0)) {
        std::cout << "Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Point is outside the triangle." << std::endl;
    }

    if (bsp(point1[0], point1[1], point1[2], inside1)) {
        std::cout << "Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Point is outside the triangle." << std::endl;
    }

    if (bsp(point1[0], point1[1], point1[2], outside1)) {
        std::cout << "Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Point is outside the triangle." << std::endl;
    }

    if (bsp(point2[0], point2[1], point2[2], inside2)) {
        std::cout << "Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Point is outside the triangle." << std::endl;
    }

    if (bsp(point2[0], point2[1], point2[2], outside2)) {
        std::cout << "Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Point is outside the triangle." << std::endl;
    }

    if (bsp(point3[0], point3[1], point3[2], inside3)) {
        std::cout << "Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Point is outside the triangle." << std::endl;
    }

    if (bsp(point3[0], point3[1], point3[2], outside3)) {
        std::cout << "Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Point is outside the triangle." << std::endl;
    }

    return 0;
}