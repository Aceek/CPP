/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 03:54:29 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/23 02:16:11 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : _type("default") {
	std::cout << "Class AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type) {
	std::cout << "Class AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal) {
	*this = animal;
}

AAnimal::~AAnimal() {
	std::cout << "Class AAnimal destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &animal) {
	if (this != &animal) {
		this->_type = animal._type;
	}
	return (*this);
}

void	AAnimal::makeSound(void) const {
	std::cout << "Je suis un animal" << std::endl;
}

std::string	AAnimal::getType() const {
	return(this->_type);
}