/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 01:53:13 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/27 08:58:16 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C05_EX02_SHRUBBERYCREATIONFORM_HPP_
#define C05_EX02_SHRUBBERYCREATIONFORM_HPP_

#include "Form.hpp"

class ShrubberyCreationForm : public Form { 
 public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &other);

	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);

	virtual void		execute(Bureaucrat const & executor) const;

 private:
	std::string	_target;
	
};

#endif  // C05_EX02_SHRUBBERYCREATIONFORM_HPP_
