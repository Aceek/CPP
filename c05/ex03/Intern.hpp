/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 04:47:18 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/20 05:22:25 by ilinhard         ###   ########.fr       */
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
	
	Intern &operator=(const Intern &other);

	Form	*makePresidential(std::string target);
	Form	*makeRobotomy(std::string target);
	Form	*makeShrubbery(std::string target);
	Form	*makeForm(std::string formName, std::string targetName);

};