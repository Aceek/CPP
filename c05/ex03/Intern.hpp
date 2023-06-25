/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 04:47:18 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/25 03:17:25 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	Form	*makeForm(std::string formName, std::string targetName);

};