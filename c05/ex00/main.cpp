/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 05:15:03 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/13 05:11:23 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	try {
		// test 0
		std::cout << "------------TEST0------------" << std::endl;
		Bureaucrat def = Bureaucrat();
		std::cout << def;
		std::cout << std::endl;
		// Should throw exeption : 
		// Bureaucrat jean = Bureaucrat("jean", 170);
		
	} catch(const std::exception &e) {
		std::cerr << "Error : " << e.what() << std::endl;
	}

	try
	{
		/* code */
		// test1 :
		std::cout << "------------TEST1------------" << std::endl;
		Bureaucrat test = Bureaucrat("George", 149);
		test.retrogradation();
		std::cout << test;
		std::cout << std::endl;
		// Should throw exeption : 
		// test.retrogradation();
		// std::cout << test;
	} catch(const std::exception &e) {
		std::cerr << "Error : " << e.what() << std::endl;
	}
	try
	{
		/* code */
		// test2 :
		std::cout << "------------TEST2------------" << std::endl;
		Bureaucrat test2 = Bureaucrat("Pauline", 1);
		test2.gradation();
		std::cout << test2;
		std::cout << std::endl;

	} catch(const std::exception &e) {
		std::cerr << "Error : " << e.what() << std::endl;
	}
	return (0);
}
