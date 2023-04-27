/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 05:15:03 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/27 05:17:51 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// int main(void)
// {
//     try
//     {
//         Bureaucrat b1("B1", 139);
//         Form f1(140, 90, "f1");
//         std::cout << b1 << std::endl;
//         std::cout << "Before f1 being signed "<< f1 << std::endl;
//         b1.signForm(f1);
//         std::cout << "After f1 being signed "<< f1 << std::endl;
// 	}
//     catch (std::exception & e) {
// 		std::cerr << e.what() << std::endl;;
//     }
    
// 	std::cout << std::endl << std::endl;

//     try
//     {
//         Bureaucrat b2("B2", 150);
//         Form f2(149, 150, "F2");

//         std::cout << b2 << std::endl;
//         std::cout << f2 << std::endl;
//         b2.signForm(f2);
//         std::cout << f2 << std::endl;
//     }
//     catch (std::exception & e) {
// 		std::cerr << e.what() << std::endl;;
//     }

// 	std::cout << std::endl << std::endl;

//     try
//     {
//         Bureaucrat b3("B2", 150);
//         Form f3(152, 150, "F2");

//         std::cout << b3 << std::endl;
//         std::cout << f3 << std::endl;
//         b3.signForm(f3);
//         std::cout << f3 << std::endl;
//     }
//     catch (std::exception & e) {
// 		std::cerr << e.what() << std::endl;;
//     }
//     return (0);
// }

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