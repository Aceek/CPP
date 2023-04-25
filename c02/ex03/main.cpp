/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:45:51 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/25 06:23:50 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Operator.hpp>
#include "Fixed.hpp"
#include "Point.hpp"


int main() {


	// Fixed a(0);
	// Fixed b(0);

	Point b = Point(10, 5);
	Point a = Point();

	a.operator=(b);
    return 0;
}