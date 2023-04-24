/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:44:39 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/24 22:42:47 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main() {
	PhoneBook	repertoire;
	std::string	input = "";

	repertoire.starting();
	while (input != "EXIT") {
		if (input == "ADD") {
			repertoire.addContact();
		} else if (input == "SEARCH") {
			repertoire.printContacts();
			repertoire.search();
		}
		std::cout << "> ";
		std::getline(std::cin, input);
		if (std::cin.eof()) {
			std::cout << "End of file reache" << std::endl;
			break;
		}
	}
	return (0);
}
