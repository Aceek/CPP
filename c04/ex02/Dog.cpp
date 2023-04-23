/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 04:41:02 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/22 05:54:47 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("dog") {
	std::cout << "Class Dog constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &dog) : AAnimal(dog) {
	std::cout << "Class Dog copy constructor called" << std::endl;
	*this = dog;
}

Dog::~Dog(void) {
	std::cout << "Class Dog destructor called" << std::endl;
	delete this->brain;
}

Dog	&Dog::operator=(const Dog &dog) {
	std::cout << "Class Dog Operator affectation called" << std::endl;
	if (this != &dog) {
		AAnimal::operator=(dog);
		delete this->brain;
		this->brain = new Brain(*dog.brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Wouf Wouf" << std::endl;
}
