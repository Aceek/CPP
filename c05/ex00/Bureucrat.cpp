/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureucrat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 04:47:41 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/26 07:27:07 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureucrat.hpp"

Bureucrat::Bureucrat() : _name("default"), _grade(150) {
	std::cout << "Bureucrat create with name " << this->_name << " and grade "
			<< this->_grade << std::endl;
}

Bureucrat::Bureucrat(std::string name, int grade) : _name(name) {
	if (grade < 1) {
		throw Bureucrat::GradeTooHighExeption();
	} else if (grade > 150) {
		throw Bureucrat::GradeTooLowException();
	}
	_grade = grade;
	std::cout << "Bureucrat create with name " << this->_name << " and grade "
		<< this->_grade << std::endl;
}

Bureucrat::Bureucrat(const Bureucrat &other) {
	*this = other;
}

Bureucrat::~Bureucrat() {
	std::cout << "Class Bureucrat destructor called" << std::endl;
}

Bureucrat	&Bureucrat::operator=(const Bureucrat &other) {
	if (this != &other) {
		std::string *tmp = const_cast<std::string*>(&this->_name);
		*tmp = other._name;
		this->_grade = other._grade;
	}
	return (*this);
}

std::string	Bureucrat::getName() const {
	return (this->_name);
}

int	Bureucrat::getGrade() const {
	return (this->_grade);
}

void	Bureucrat::gradation() {
	if ((this->_grade - 1) < 1) {
		throw Bureucrat::GradeTooHighExeption();
	}
	this->_grade -= 1;
	std::cout << this->getName() << " Promoted ! New grade : "
			<< this->getGrade() << std::endl;
}

void	Bureucrat::retrogradation() {
	if ((this->_grade + 1) > 150) {
		throw Bureucrat::GradeTooLowException();
	}
	this->_grade += 1;
	std::cout << this->getName() << "Retrograded :(. New grade : "
			<< this->getGrade() << std::endl;
}

const char* Bureucrat::GradeTooHighExeption::what() const throw() {
	return ("Grade too high for Bureucrat");
}

const char* Bureucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low for Bureucrat");
}

std::ostream &operator<<(std::ostream& os, const Bureucrat &b) {
	os << b.getName() << ", bureucrat grade " << b.getGrade() << std::endl;
	return (os);
}