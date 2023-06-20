/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 02:38:57 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/20 04:25:17 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

	RobotomyRequestForm::RobotomyRequestForm(std::string target)
		: Form(72, 45, "RobotomyRequestForm"), _target(target) {
			std::cout << "RobotomyRequestForm created with name : " << this->getName()
				<< " and signed Grade : " << this->getSignedGrade()
				<< " and execute Grade : " << this->getExecuteGrade() << std::endl; 
	}

	RobotomyRequestForm::RobotomyRequestForm()
	: Form(72, 45, "RobotomyRequestForm"), _target("Default") {
			std::cout << "RobotomyRequestForm created with name : " << this->getName()
				<< " and signed Grade : " << this->getSignedGrade()
				<< " and execute Grade : " << this->getExecuteGrade() << std::endl; 
	}

	RobotomyRequestForm::~RobotomyRequestForm() {
		std::cout << "RobotomyRequestForm destructod called" << std::endl;	
	}

	RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other) {
		*this = other;
	}
	
	RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
		if (this != &other) {
			this->_target = other._target;
		}
		return (*this);
	}
	
	void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
		if (!this->getValidate()) {
			throw Form::NotSignedExeption();
		} else if (executor.getGrade() > this->getExecuteGrade()) {
			throw Form::GradeTooLowException();
		}

    	std::srand(static_cast<unsigned int>(std::time(0)));
    	int randomNum = std::rand() % 2;
		std::cout << "*bruits de perceuse*" << std::endl;
		if (randomNum == 0) {
			std::cout << "Target : " << this->_target << " successfully Robotomysised" << std::endl;
		} else {
			std::cout << "Target : " << this->_target << " failed to Robotomysised" << std::endl;
		}
	}
