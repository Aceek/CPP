/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:38:32 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/26 23:57:03 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _validate(false), _signedGrade(1), _executeGrade(1) {
	std::cout << "Class Form constructor call" << std::endl;
}

Form::Form(int signedGrade, int executeGrade, std::string name) : _name(name),
	_validate(false) {
	
}

Form::Form(const Form &other) {
	*this = other;
}

Form::~Form() {
	std::cout << "Class Form destructor call" << std::endl;
}

Form	&Form::operator=(const Form &other) {
	if (this != &other)
	{
		std::string *tmp = const_cast<std::string*>(&this->_name);
		*tmp = other._name;
		this->_validate = other._validate;
		this->_signedGrade = other._signedGrade;
		this->_executeGrade = other._executeGrade;
	}
	return (*this);
}

std::string	Form::getName() {
	return (this->_name);
}

bool		Form::getValidate() {
	return (this->_validate);
}

int			Form::getSignedGrade() {
	return (this->_signedGrade);
}

int			Form::getExecuteGrade() {
	return (this->_executeGrade);
}