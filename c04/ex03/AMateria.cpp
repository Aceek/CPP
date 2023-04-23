/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:07:31 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/23 23:48:43 by ilinhard         ###   ########.fr       */
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


std::string const	&AMateria::getType() const {
		return (this->_type);
}
