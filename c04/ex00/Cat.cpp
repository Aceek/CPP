/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 04:25:57 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/22 05:54:33 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("cat") {
	std::cout << "Class Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
	*this = cat;
}

Cat::~Cat(void) {
	std::cout << "Class Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &cat) {
	if (this != &cat) {
		Animal::operator=(cat);
	}
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Miaou Miaou" << std::endl;
}
