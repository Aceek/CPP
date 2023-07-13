/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 05:00:43 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/13 04:42:31 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}
Intern::~Intern() {}

Intern::Intern(const Intern &other) {
	*this = other;
}

Intern	&Intern::operator=(const Intern &other) {
	(void)other;
	return (*this);
}

AForm	*Intern::makeForm(std::string formName, std::string targetName) {
	int			i = 0;
	std::string formNames[] = {"Presidential", "Robotomy", "Shrubbery"};

	for (i = 0; i < 3 && formNames[i] != formName; i++) {}
	
	switch (i) {
	case 0:
		std::cout << "Intern create : " << formName << std::endl;
		return (new PresidentialPardonForm(targetName));
	case 1:
		std::cout << "Intern create : " << formName << std::endl;
		return (new RobotomyRequestForm(targetName));
	case 2:
		std::cout << "Intern create : " << formName << std::endl;
		return (new ShrubberyCreationForm(targetName));
	default:
		std::cerr << "No form match this formName" << std::endl;
	}
	
	return (NULL);
}
