/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 05:15:03 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/27 04:59:11 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureucrat.hpp"

int main(void)
{
    try
    {
        Bureucrat b1("B1", 139);
        Form f1(140, 90, "f1");
        std::cout << b1 << std::endl;
        std::cout << "Before f1 being signed "<< f1 << std::endl;
        b1.signForm(f1);
        std::cout << "After f1 being signed "<< f1 << std::endl;
	}
    catch (std::exception & e) {
		std::cerr << e.what() << std::endl;;
    }
    
	std::cout << std::endl << std::endl;

    try
    {
        Bureucrat b2("B2", 150);
        Form f2(149, 150, "F2");

        std::cout << b2 << std::endl;
        std::cout << f2 << std::endl;
        b2.signForm(f2);
        std::cout << f2 << std::endl;
    }
    catch (std::exception & e) {
		std::cerr << e.what() << std::endl;;
    }

	std::cout << std::endl << std::endl;

    try
    {
        Bureucrat b3("B2", 150);
        Form f3(152, 150, "F2");

        std::cout << b3 << std::endl;
        std::cout << f3 << std::endl;
        b3.signForm(f3);
        std::cout << f3 << std::endl;
    }
    catch (std::exception & e) {
		std::cerr << e.what() << std::endl;;
    }
    return (0);
}