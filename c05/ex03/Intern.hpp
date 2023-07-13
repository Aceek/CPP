/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 04:47:18 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/13 04:42:47 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C05_EX03_INTERN_HPP_
#define C05_EX03_INTERN_HPP_

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
 public:
	Intern();
	~Intern();
	Intern(const Intern &other);
	
	Intern	&operator=(const Intern &other);
	AForm	*makeForm(std::string formName, std::string targetName);

};

#endif  // C05_EX03_INTERN_HPP_