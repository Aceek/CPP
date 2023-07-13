/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 05:15:03 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/13 05:10:36 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) 
{

	std::cout << "---------CREATE BUREAUCRATS AND FORMS---------" << std::endl;

	Bureaucrat	vasilia("Vasilia", 146);
	Bureaucrat	boss("Boss", 5);
	ShrubberyCreationForm	Shrubbery1("jardin");
	ShrubberyCreationForm	Shrubbery2("balcon");
	RobotomyRequestForm		Robotomy("George");
	PresidentialPardonForm	President("Bill");

	std::cout << "---------------EXECUTING SHRUBBERY------------" << std::endl;

	std::cout << vasilia << std::endl;

	vasilia.signForm(Shrubbery1);
	vasilia.signForm(Shrubbery2);

	vasilia.gradation();
	std::cout << vasilia << std::endl;

	vasilia.signForm(Shrubbery1);
	vasilia.executeForm(Shrubbery1);
	boss.executeForm(Shrubbery1);
	boss.executeForm(Shrubbery2);
	boss.signForm(Shrubbery2);
	boss.executeForm(Shrubbery2);

	std::cout << "---------------EXECUTING ROBOTOMY------------" << std::endl;

	boss.signForm(Robotomy);
	boss.executeForm(Robotomy);
	
	std::cout << "---------------EXECUTING PRESIDENTIAL--------" << std::endl;
	vasilia.executeForm(President);
	vasilia.signForm(President);
	boss.signForm(President);
	boss.executeForm(President);

	std::cout << "-----------------------END--------------------" << std::endl;


	return (0);
}