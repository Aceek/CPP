/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:38:32 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/13 04:39:45 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _validate(false), _signedGrade(1), _executeGrade(1) {
	std::cout << "Form  create with name : " << this->_name <<
			" and signedGrade : " << this->_signedGrade <<
			" and executeGrade : " << this->_executeGrade <<  std::endl;
}

AForm::AForm(int signedGrade, int executeGrade, std::string name) : _name(name),
	_validate(false), _signedGrade(signedGrade), _executeGrade(executeGrade) {
	if (signedGrade < 1 || executeGrade < 1) {
		throw AForm::GradeTooHighException();
	} else if (signedGrade > 150 || executeGrade > 150) {
		throw AForm::GradeTooLowException();
	}
	std::cout << "Form  create with name : " << this->_name <<
		" and signedGrade : " << this->_signedGrade <<
		" and executeGrade : " << this->_executeGrade <<  std::endl;
}

AForm::AForm(const AForm &other) : _name(other._name),
		_signedGrade(other._signedGrade), _executeGrade(other._executeGrade) {
	*this = other;
}

AForm::~AForm() {
	std::cout << "Class Form destructor call" << std::endl;
}

AForm	&AForm::operator=(const AForm &other) {
	if (this != &other) {
		this->_validate = other._validate;
	}
	return (*this);
}

const std::string	&AForm::getName() const {
	return (this->_name);
}

const bool		&AForm::getValidate() const {
	return (this->_validate);
}

const int			&AForm::getSignedGrade() const {
	return (this->_signedGrade);
}

const int			&AForm::getExecuteGrade() const {
	return (this->_executeGrade);
}

void				AForm::beSigned(const Bureaucrat &b) {
	if (b.getGrade() <= this->getSignedGrade()) {
		this->_validate = true;
	} else {
		throw AForm::GradeTooLowException();
	}
}

std::ostream &operator<<(std::ostream& os, const AForm &f) {
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

const char* AForm::GradeTooHighException::what() const throw() {
	return ("Grade too hight Form");
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ("Grade too low form");
}

const char*	AForm::NotSignedExeption::what() const throw() {
	return ("Form not signed can't execute");
}