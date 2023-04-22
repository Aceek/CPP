/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 05:33:29 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/22 05:34:57 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("default") {
	std::cout << "Class WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "Class WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal) {
	*this = animal;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Class WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &animal) {
	if (this != &animal) {
		this->_type = animal._type;
	}
	return (*this);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "Je suis un Wronganimal" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return(this->_type);
}