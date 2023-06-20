/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 04:47:41 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/27 04:55:48 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {
	std::cout << "Bureaucrat create with name " << this->_name << " and grade "
			<< this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighExeption();
	} else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	_grade = grade;
	std::cout << "Bureaucrat create with name " << this->_name << " and grade "
		<< this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
	*this = other;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Class Bureaucrat destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other) {
	if (this != &other) {
		std::string *tmp = const_cast<std::string*>(&this->_name);
		*tmp = other._name;
		this->_grade = other._grade;
	}
	return (*this);
}

std::string	Bureaucrat::getName() const {
	return (this->_name);
}

int	Bureaucrat::getGrade() const {
	return (this->_grade);
}

void	Bureaucrat::gradation() {
	if ((this->_grade - 1) < 1) {
		throw Bureaucrat::GradeTooHighExeption();
	}
	this->_grade -= 1;
	std::cout << this->getName() << " Promoted ! New grade : "
			<< this->getGrade() << std::endl;
}

void	Bureaucrat::retrogradation() {
	if ((this->_grade + 1) > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade += 1;
	std::cout << this->getName() << "Retrograded :(. New grade : "
			<< this->getGrade() << std::endl;
}

void	Bureaucrat::signForm(Form &f) {
	try
	{
		f.beSigned(*this);
		std::cout << this->_name << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " coouldn't sign " << f.getName()
				<< " because "<<  e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & f) {
	try
	{
		f.execute(*this);
		std::cout << this->_name << " have execute " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't execute " << f.getName()
				<< " because " << e.what() << std::endl;
	}
}


const char* Bureaucrat::GradeTooHighExeption::what() const throw() {
	return ("Grade too high for Bureaucrat");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low for Bureaucrat");
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat &b) {
	os << b.getName() << ", Bureaucrat grade " << b.getGrade();
	return (os);
}
