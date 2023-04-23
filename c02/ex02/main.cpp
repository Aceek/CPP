/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:45:51 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/23 03:03:29 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Operator.hpp>
#include <Fixed.hpp>
// int main( void ) {
// Fixed a;
// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;

// std::cout << b << std::endl;
// std::cout << Fixed::max( a, b ) << std::endl;
// return 0;
// }

int main() {
			Fixed a(2.3f);
			Fixed b(3.7f);
    const	Fixed g(5.3f);
    const	Fixed h(6.7f);
    // Test de l'opérateur +
    Fixed c = a + b;
    std::cout << "a + b = " << c << std::endl;

    // Test de l'opérateur -
    Fixed d = a - b;
    std::cout << "a - b = " << d << std::endl;

    // Test de l'opérateur *
    Fixed e = a * b;
    std::cout << "a * b = " << e << std::endl;

    // Test de l'opérateur /
    Fixed f = a / b;
    std::cout << "a / b = " << f << std::endl;

    // Test des opérateurs de comparaison
    std::cout << "a < b ? " << (a < b) << std::endl;
    std::cout << "a > b ? " << (a > b) << std::endl;
    std::cout << "a == b ? " << (a == b) << std::endl;
    std::cout << "a != b ? " << (a != b) << std::endl;
    std::cout << "a <= b ? " << (a <= b) << std::endl;
    std::cout << "a >= b ? " << (a >= b) << std::endl;

    // Test des opérateurs d'incrémentation/décrémentation
    std::cout << "a++ = " << a++ << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "++a = " << ++a << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "a-- = " << a-- << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "--a = " << --a << std::endl;
    std::cout << "a = " << a << std::endl;

	std::cout << "max =  " << Fixed::max(a, b) << std::endl;
	std::cout << "min =  " << Fixed::min(a, b) << std::endl;

	std::cout << "max =  " << Fixed::max(g, h) << std::endl;
	std::cout << "min =  " << Fixed::min(g, h) << std::endl;

    return 0;
}