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

Dog::Dog(void) : Animal("dog") {
	std::cout << "Class Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog) {
	*this = dog;
}

Dog::~Dog(void) {
	std::cout << "Class Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog) {
	if (this != &dog) {
		Animal::operator=(dog);
	}
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Wouf Wouf" << std::endl;
}
