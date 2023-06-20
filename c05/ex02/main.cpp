/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 05:15:03 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/20 03:36:18 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) 
{

	std::cout << "---------CREATE BUREAUCRATS AND FORMS---------" << std::endl;

	Bureaucrat	vasilia("Vasilia", 146);
	Bureaucrat	boss("Boss", 5);
	ShrubberyCreationForm	Shrubbery1("jardin");
	ShrubberyCreationForm	Shrubbery2("balcon");

	std::cout << "-------------------EXECUTING--------------------" << std::endl;

	std::cout << vasilia << std::endl;

	vasilia.signForm(Shrubbery1);
	vasilia.signForm(Shrubbery2);

	vasilia.gradation();
	std::cout << vasilia << std::endl;

	vasilia.signForm(Shrubbery1);
	vasilia.executeForm(Shrubbery1);
	boss.executeForm(Shrubbery1);
	// std::cout << form42 << std::endl;

	return (0);
}