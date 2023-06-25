/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 05:15:03 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/25 02:32:02 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) 
{

	std::cout << "---------CREATE BUREAUCRATS AND FORMS---------" << std::endl;

	Bureaucrat	pyotr;
	Bureaucrat	vasilia("Vasilia", 43);
	Form		form42( 42, 42, "42");
	Form		form149(149, 149, "149");
	Form		*form42_21 = new Form(42, 21, "42_21");

	std::cout << "------------------DEEP COPY-------------------" << std::endl;

	Form		*form42_21_copy = new Form(*form42_21);
	delete form42_21;
	std::cout << *form42_21_copy << std::endl;
	delete form42_21_copy;

	std::cout << "----------HIGHEST AND LOWEST GRADES-----------" << std::endl;

	try
	{
		Form		form151_1( 151, 1, "151_1");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form		form151_0( 150, 0, "151_0");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "-------------------SIGNING--------------------" << std::endl;

	std::cout << pyotr << std::endl;
	std::cout << vasilia << std::endl;

	pyotr.signForm(form42);
	pyotr.signForm(form149);

	vasilia.signForm(form149);
	vasilia.signForm(form42);

	vasilia.gradation();
	std::cout << vasilia << std::endl;

	vasilia.signForm(form42);
	std::cout << form42 << std::endl;

	return (0);
}