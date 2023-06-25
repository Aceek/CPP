/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:38:32 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/25 02:16:47 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _validate(false), _signedGrade(1), _executeGrade(1) {
	std::cout << "Form  create with name : " << this->_name <<
			" and signedGrade : " << this->_signedGrade <<
			" and executeGrade : " << this->_executeGrade <<  std::endl;
}

Form::Form(int signedGrade, int executeGrade, std::string name) : _name(name),
	_validate(false) {
	if (signedGrade < 1 || executeGrade < 1) {
		throw Form::GradeTooHighException();
	} else if (signedGrade > 150 || executeGrade > 150) {
		throw Form::GradeTooLowException();
	}
	_signedGrade = signedGrade;
	_executeGrade = executeGrade;
	std::cout << "Form  create with name : " << this->_name <<
		" and signedGrade : " << this->_signedGrade <<
		" and executeGrade : " << this->_executeGrade <<  std::endl;
}

Form::Form(const Form &other) : _name(other._name) {
	*this = other;
}

Form::~Form() {
	std::cout << "Class Form destructor call" << std::endl;
}

Form	&Form::operator=(const Form &other) {
	if (this != &other)
	{
		this->_validate = other._validate;
		this->_signedGrade = other._signedGrade;
		this->_executeGrade = other._executeGrade;
	}
	return (*this);
}

const std::string	&Form::getName() const {
	return (this->_name);
}

const bool		&Form::getValidate() const {
	return (this->_validate);
}

const int			&Form::getSignedGrade() const {
	return (this->_signedGrade);
}

const int			&Form::getExecuteGrade() const {
	return (this->_executeGrade);
}

void				Form::beSigned(const Bureaucrat &b) {
	if (b.getGrade() <= this->getSignedGrade()) {
		this->_validate = true;
	} else {
		throw Form::GradeTooLowException();
	}
}

std::ostream &operator<<(std::ostream& os, const Form &f) {
	if (f.getValidate()){
		os << "Form signed ";
	} else {
		os << "Form not signed ";
	}
	os << "named " << f.getName() << " grade require to signe : "
			<< f.getSignedGrade() << " grade require to execute : "
			<< f.getExecuteGrade();
	return (os);
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade too hight form");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Grade too low form");
}

const char*	Form::NotSignedExeption::what() const throw() {
	return ("Form not signed can't execute");
}