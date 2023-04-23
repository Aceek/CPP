/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 04:25:57 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/23 02:17:15 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("cat") {
	std::cout << "Class Cat constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &cat) : AAnimal(cat) {
	std::cout << "Class Cat copy constructor called" << std::endl;
	*this = cat;
}

Cat::~Cat(void) {
	std::cout << "Class Cat destructor called" << std::endl;
	delete this->brain;
}

Cat	&Cat::operator=(const Cat &cat) {
	std::cout << "Class Cat Operator affectation called" << std::endl;
	if (this != &cat) {
		AAnimal::operator=(cat);
		delete this->brain;
		this->brain = new Brain(*cat.brain);
	}
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Miaou Miaou" << std::endl;
}
