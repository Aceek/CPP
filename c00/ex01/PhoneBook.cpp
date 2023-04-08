/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:39:20 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/08 19:11:40 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {}

void	PhoneBook::starting(void) const {
	std::cout << "Bienvenue votre agenda de gestion de contacts !" << std::endl;
    std::cout << "Vous pouvez ajouter, afficher, rechercher des contacts." << std::endl;
    std::cout << "ADD : pour ajouter un contact" << std::endl;
    std::cout << "SEARCH : pour afficher la liste des contacts" << std::endl;
    std::cout << "EXIT : pour quitter le programme" << std::endl;
    std::cout << std::endl;
}

void	PhoneBook::addContact(void) {
	static int count = 0;
	this->_contacts[count % 8].init(count % 8);
	count++;
}

void	PhoneBook::printContacts(void) const {
	std::cout << "----------------- CONTACT -----------------" << std::endl;
	for (int i = 0; i < MAX_CONTACT; i++)
		this->_contacts[i].print(i);
	
}

int	PhoneBook::_getInput(void) const {
	int			index = -1;
	bool		validate = false;

	while (!validate)
	{
		std::cout << "Ecrivez un numero d'index compris entre 0 et 7 : ";
		std::cin >> index;
		if (std::cin.good() && (index >= 0 && index <= 7)) {
			validate = true;
		}
		else {
			std::cout <<  "Erreur index." << std::endl;
			std::cin.clear();
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return (index);
}
void	PhoneBook::search(void) const {
	int index = PhoneBook::_getInput();
	PhoneBook::_contacts[index].display(index);
}
