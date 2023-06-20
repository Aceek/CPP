/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 02:38:57 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/20 03:44:35 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

	ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
		: Form(145, 137, "ShrubberyCreationForm"), _target(target) {
			std::cout << "ShrubberyCreationForm created with name : " << this->getName()
				<< " and signed Grade : " << this->getSignedGrade()
				<< " and execute Grade : " << this->getExecuteGrade() << std::endl; 
	}

	ShrubberyCreationForm::ShrubberyCreationForm()
	: Form(145, 137, "ShrubberyCreationForm"), _target("Default") {
			std::cout << "ShrubberyCreationForm created with name : " << this->getName()
				<< " and signed Grade : " << this->getSignedGrade()
				<< " and execute Grade : " << this->getExecuteGrade() << std::endl; 
	}

	ShrubberyCreationForm::~ShrubberyCreationForm() {
		std::cout << "ShrubberyCreationForm destructod called" << std::endl;	
	}

	ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other) {
		*this = other;
	}
	
	ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
		if (this != &other) {
			this->_target = other._target;
		}
		return (*this);
	}
	
	void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
		if (!this->getValidate()) {
			throw Form::NotSignedExeption();
		} else if (executor.getGrade() > this->getExecuteGrade()) {
			throw Form::GradeTooLowException();
		}
		std::string tmpTarget = this->_target + "_shrubbery";
		std::ofstream file(tmpTarget.c_str());

		if (file.is_open()) {
			
			file << "     *     " << std::endl;
			file << "    ***    " << std::endl;
			file << "   *****   " << std::endl;
			file << "  *******  " << std::endl;
			file << " ********* " << std::endl;
			file << "***********" << std::endl;
			file << "    ***    " << std::endl;
			file << "    ***    " << std::endl;
			file << std::endl;
		} else {
			std::cerr << "Error creation file" << std::endl;
		}
		file.close();
	}

	

	