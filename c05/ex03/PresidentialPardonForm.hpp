/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 04:27:51 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/27 08:59:57 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C05_EX02_PRESIDENTIALPARDONFORM_HPP_
#define C05_EX02_PRESIDENTIALPARDONFORM_HPP_

#include "Form.hpp"

class PresidentialPardonForm : public Form { 
 public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &other);

	PresidentialPardonForm& operator=(const PresidentialPardonForm &other);

	virtual void		execute(Bureaucrat const & executor) const;

 private:
	std::string	_target;
	
};

#endif  // C05_EX02_PRESIDENTIALPARDONFORM_HPP_
