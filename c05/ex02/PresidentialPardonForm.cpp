/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 04:28:14 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/13 04:29:44 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

	PresidentialPardonForm::PresidentialPardonForm(std::string target)
		: Form(25, 5, "PresidentialPardonForm"), _target(target) {
			std::cout << "PresidentialPardonForm created with name : " << this->getName()
				<< " and signed Grade : " << this->getSignedGrade()
				<< " and execute Grade : " << this->getExecuteGrade() << std::endl; 
	}

	PresidentialPardonForm::PresidentialPardonForm()
	: Form(25, 5, "PresidentialPardonForm"), _target("Default") {
			std::cout << "PresidentialPardonForm created with name : " << this->getName()
				<< " and signed Grade : " << this->getSignedGrade()
				<< " and execute Grade : " << this->getExecuteGrade() << std::endl; 
	}

	PresidentialPardonForm::~PresidentialPardonForm() {
		std::cout << "PresidentialPardonForm destructod called" << std::endl;	
	}

	PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other) {
		*this = other;
	}
	
	PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
		if (this != &other) {
			this->_target = other._target;
		}
		return (*this);
	}
	
	void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
		if (!this->getValidate()) {
			throw Form::NotSignedExeption();
		} else if (executor.getGrade() > this->getExecuteGrade()) {
			throw Form::GradeTooLowException();
		}

		std::cout << "Target : " << this->_target << " has been forgiven by Zaphod Beeblebrox"
				<< std::endl;
	}
