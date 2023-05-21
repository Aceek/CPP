/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:27:33 by ilinhard          #+#    #+#             */
/*   Updated: 2023/05/20 06:48:31 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

Ice::Ice() : AMateria("ice") {
	// std::cout << "Class Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other) {
	*this = other;
}

Ice::~Ice() {
	// std::cout << "Class Ice destructor called" << std::endl;
}

Ice	&Ice::operator=(const Ice &other) {
	if (this != &other) {
		AMateria::operator=(other);
	}
	return (*this);
}

AMateria *Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}