/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureucrat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 04:47:41 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/24 05:02:28 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureucrat.hpp"

Bureucrat::Bureucrat() : _name("default"), _grade(150) {
	std::cout << "Bureucrat create with name " << this->_name << " and grade "
			<< this->_grade << std::endl;
}

Bureucrat::Bureucrat(std::string name, unsigned int grade) : _name(name) {
	try {
		if (grade < 1 || grade > 150) {
			throw std::runtime_error("Error grade must be >= 1 && <= 150");
		}
		this->_grade = grade;
	} catch (std::exeption& e) {
		e.what();
		
	}
}


Bureucrat::Bureucrat(const Bureucrat &other) {
	*this = other;
}

Bureucrat::~Bureucrat() {
	std::cout << "Class Bureucrat destructor called" << std::endl;
}

Bureucrat	&Bureucrat::operator=(const Bureucrat &other) {
	if (this != &other) {
		this->_name = other.getName();
		this->_grade = other.getGrade();
	}
	return (*this);
}

std::string	&Bureucrat::getName() const {
	return (this->_name);
}

unsigned int	Bureucrat::getGrade() const {
	return (this->_grade);
}