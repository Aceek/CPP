/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 03:49:10 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/27 08:57:26 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C05_EX02_ROBOTOMYREQUESTFORM_HPP_
#define C05_EX02_ROBOTOMYREQUESTFORM_HPP_

#include "Form.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public Form { 
 public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &other);

	RobotomyRequestForm& operator=(const RobotomyRequestForm &other);

	virtual void		execute(Bureaucrat const & executor) const;

 private:
	std::string	_target;
	
};

#endif  // C05_EX02_ROBOTOMYREQUESTFORM_HPP_
