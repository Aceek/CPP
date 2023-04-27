/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 05:15:03 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/27 05:12:23 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	try {
		// test 0
		Bureaucrat def = Bureaucrat();
		std::cout << def;
		std::cout << std::endl;

		// test1 :
		Bureaucrat test = Bureaucrat("George", 149);
		test.retrogradation();
		std::cout << test;
		std::cout << std::endl;

		// test2 :
		Bureaucrat test2 = Bureaucrat("Pauline", 1);
		test2.gradation();
		std::cout << test2;
		std::cout << std::endl;

	} catch(const std::exception &e) {
		std::cerr << "Error : " << e.what() << std::endl;
	}
	return (0);
}
