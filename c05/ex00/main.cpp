/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 05:15:03 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/26 07:26:38 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureucrat.hpp"

int	main() {
	try {
		// test 0
		Bureucrat def = Bureucrat();
		std::cout << def;
		std::cout << std::endl;

		// test1 :
		Bureucrat test = Bureucrat("George", 149);
		test.retrogradation();
		std::cout << test;
		std::cout << std::endl;

		// test2 :
		Bureucrat test2 = Bureucrat("Pauline", 1);
		test2.gradation();
		std::cout << test2;
		std::cout << std::endl;

	} catch(const std::exception &e) {
		std::cerr << "Error : " << e.what() << std::endl;
	}
	return (0);
}
