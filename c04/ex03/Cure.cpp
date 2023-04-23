/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:27:33 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/23 04:47:57 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Class Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &other) {
	*this = other;
}

Cure::~Cure() {
	std::cout << "Class Cure destructor called" << std::endl;
}

Cure	&Cure::operator=(const Cure &other) {
	if (this != &other) {
		AMateria::operator=(other);
	}
	return (*this);
}

AMateria *Cure::clone() const {
	return (new Cure(*this));
}

// void Cure::use(ICharacter& target) {
// 	std::cout << "* heals " << taget.name << "'s wounds *" << std::endl;
// }
