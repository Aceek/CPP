/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chien.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 04:41:02 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/22 05:11:58 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Chien.hpp"

Chien::Chien(void) : Animal("chien") {
	std::cout << "Class Chien constructor called" << std::endl;
}

Chien::Chien(const Chien &chien) : Animal(chien) {
	*this = chien;
}

Chien::~Chien(void) {
	std::cout << "Class Chien destructor called" << std::endl;
}

Chien	&Chien::operator=(const Chien &chien) {
	if (this != &chien) {
		Animal::operator=(chien);
	}
	return (*this);
}

void	Chien::makeSound(void) const {
	std::cout << "Wouf Wouf" << std::endl;
}
