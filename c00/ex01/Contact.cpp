/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:37:22 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/09 17:28:53 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

std::string	Contact::_getInput(std::string str) const {
	std::string input = "";

	while (input.empty()) {
		std::cout << str;
		std::getline(std::cin, input);
		if (input.empty()) {
			std::cin.clear();
			std::cout << "String not valid please retry" << std::endl;
		}
	}
	return (input);
}

void	Contact::init(int index) {
	this->_firstName =  this->_getInput("Enter first name : ");
	this->_lastName =  this->_getInput("Enter last name : ");
	this->_nickname =  this->_getInput("Enter  nickname : ");
	this->_phoneNumber =  this->_getInput("Enter phone number : ");
	this->_darkestSecret =  this->_getInput("Enter darkestSecret : ");
	this->_index = index;
}

std::string	Contact::_printLen(std::string str) const {
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::print(int index) const {
	if (this->_firstName.empty() || this->_lastName.empty()
			|| this->_nickname.empty() || this->_phoneNumber.empty()
			|| this->_darkestSecret.empty())
		return;
	std::cout << "|" << std::right << std::setw(10) << index;
	std::cout << "|" << std::right << std::setw(10)
		<< this->_printLen(this->_firstName);
	std::cout << "|" << std::right << std::setw(10)
		<< this->_printLen(this->_lastName);
	std::cout << "|" << std::right << std::setw(10)
		<< this->_printLen(this->_nickname);
	std::cout << std::endl;
}

void Contact::display(int index) const {
	if (this->_firstName.empty() || this->_lastName.empty()
			|| this->_nickname.empty()
			|| this->_phoneNumber.empty() || this->_darkestSecret.empty()) {
			std::cout << "Erreur affichage contact" << std::endl;
			return;
	}
	std::cout << "---- CONTACT " << index << "----" << std::endl;
    std::cout << "First Name: " << this->_firstName << std::endl;
    std::cout << "Last Name: " << this->_lastName << std::endl;
    std::cout << "Nickname: " << this->_nickname << std::endl;
    std::cout << "PhoneNumber: " << this->_phoneNumber << std::endl;
    std::cout << "Secret: " << this->_darkestSecret << std::endl;
}
