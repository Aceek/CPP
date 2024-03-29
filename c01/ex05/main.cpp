/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:57:42 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/26 05:27:03 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main() {
	std::string	level = "";
	Harl		harl;

	while (level != "EXIT") {
		std::cout << "Enter a level : DEBUG, INFO, WARNING, ERROR"
			" or EXIT to leave: ";
		std::getline(std::cin, level);
		if (std::cin.good()) {
			harl.complain(level);
		} else if (std::cin.eof()) {
			std::cout << std::endl << "EOF reach bye" << std::endl;
			return (0);	
		} else {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
	return  (0);
}
