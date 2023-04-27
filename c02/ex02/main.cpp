/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:45:51 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/27 03:08:24 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

int main(void) {
    Fixed a(42.42f);
    Fixed b(21.21f);

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "a + b is " << a + b << std::endl;
    std::cout << "a - b is " << a - b << std::endl;
    std::cout << "a * b is " << a * b << std::endl;
    std::cout << "a / b is " << a / b << std::endl;
    std::cout << "a > b is " << (a > b) << std::endl;
    std::cout << "a < b is " << (a < b) << std::endl;
    std::cout << "a >= b is " << (a >= b) << std::endl;
    std::cout << "a <= b is " << (a <= b) << std::endl;
    std::cout << "a == b is " << (a == b) << std::endl;
    std::cout << "a != b is " << (a != b) << std::endl;

    Fixed c(a);
    std::cout << "c is " << c << std::endl;
    c.setRawBits(1234);
    std::cout << "c is now " << c << std::endl;
    
    Fixed const d(123.456f);
    std::cout << "d is " << d << std::endl;
    std::cout << "d to int is " << d.toInt() << std::endl;
    std::cout << "d to float is " << d.toFloat() << std::endl;

    std::cout << "a++ is " << a++ << std::endl;
    std::cout << "a is now " << a << std::endl;
    std::cout << "++a is " << ++a << std::endl;
    std::cout << "a is now " << a << std::endl;
    std::cout << "c-- is " << c-- << std::endl;
    std::cout << "c is now " << c << std::endl;
    std::cout << "--c is " << --c << std::endl;
    std::cout << "c is now " << c << std::endl;

    std::cout    << "a : " << a 
                << " | b : " << b 
                << " | c : " << c 
                << " | d : " << d
                << std::endl;
    std::cout << "min(a, b) is " << Fixed::min(a, b) << std::endl;
    std::cout << "min(d, b) is " << Fixed::min(d, b) << std::endl;
    std::cout << "max(a, b) is " << Fixed::max(a, b) << std::endl;
    std::cout << "max(d, b) is " << Fixed::max(d, b) << std::endl;

	Fixed e = a + b;

	std::cout << "e is " << e << std::endl;
	

	Fixed j = Fixed(-3.24f);
	std::cout << j << std::endl;

    return 0;
}