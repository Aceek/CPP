/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 03:54:29 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/22 05:26:13 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("default") {
	std::cout << "Class Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Class Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &animal) {
	*this = animal;
}

Animal::~Animal() {
	std::cout << "Class Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &animal) {
	if (this != &animal) {
		this->_type = animal._type;
	}
	return (*this);
}

void	Animal::makeSound(void) const {
	std::cout << "Je suis un animal" << std::endl;
}

std::string	Animal::getType() const {
	return(this->_type);
}