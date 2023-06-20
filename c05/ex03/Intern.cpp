/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 05:00:43 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/20 05:40:47 by ilinhard         ###   ########.fr       */
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

Form	*Intern::makePresidential(std::string target) {
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeRobotomy(std::string target) {
	return (new RobotomyRequestForm(target));
}

Form	*Intern::makeShrubbery(std::string target) {
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(std::string formName, std::string targetName) {
	std::string formNames[] = {"Presidential", "Robotomy", "Shrubbery"};
	typedef Form* (Intern::*multiForms)(std::string);
	multiForms functionsForms[] = {&Intern::makePresidential, &Intern::makeRobotomy,
			&Intern::makeShrubbery};
	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i]) {
			Form *res = (this->*functionsForms[i])(targetName);
			return (res);
		}
	}
	std::cerr << "No form match this formName" << std::endl;
	return (NULL);
}