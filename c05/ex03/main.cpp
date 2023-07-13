/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 05:15:03 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/13 04:48:14 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void) 
{

	std::cout << "----------------CREATE INTERN----------------" << std::endl;
	Intern test;
	AForm* Shrubbery1 = test.makeForm("Shrubbery", "jardin");
	AForm* Shrubbery2 = test.makeForm("Shrubbery", "balcon");
	AForm* Robotomy = test.makeForm("Robotomy", "George");
	AForm* President = test.makeForm("Presidential", "Bill");
	test.makeForm("awd", "Bill");

	
	std::cout << "---------CREATE BUREAUCRATS AND FORMS---------" << std::endl;

	Bureaucrat	vasilia("Vasilia", 146);
	Bureaucrat	boss("Boss", 5);

	std::cout << "---------------EXECUTING SHRUBBERY------------" << std::endl;
	std::cout << vasilia << std::endl;

	vasilia.signForm(*Shrubbery1);
	vasilia.signForm(*Shrubbery2);

	vasilia.gradation();
	std::cout << vasilia << std::endl;

	vasilia.signForm(*Shrubbery1);
	vasilia.executeForm(*Shrubbery1);
	boss.executeForm(*Shrubbery1);
	boss.executeForm(*Shrubbery2);
	boss.signForm(*Shrubbery2);
	boss.executeForm(*Shrubbery2);

	std::cout << "---------------EXECUTING ROBOTOMY------------" << std::endl;

	boss.signForm(*Robotomy);
	boss.executeForm(*Robotomy);
	
	std::cout << "---------------EXECUTING PRESISENTIAL--------" << std::endl;
	vasilia.executeForm(*President);
	vasilia.signForm(*President);
	boss.signForm(*President);
	boss.executeForm(*President);

	std::cout << "-----------------------END--------------------" << std::endl;
	delete Shrubbery1;
	delete Shrubbery2;
	delete Robotomy;
	delete President;

	return (0);
}