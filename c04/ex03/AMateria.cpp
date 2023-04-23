/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:07:31 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/23 04:19:50 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("") {
	std::cout << "Class AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {
	std::cout << "Class AMateria constructor called" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "Class AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other) {
	*this = other;
}

AMateria	&AMateria::operator=(const AMateria &other) {
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

std::string const	&AMateria::getType() const {
		return (this->_type);
}

