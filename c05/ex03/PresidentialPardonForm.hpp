/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 04:27:51 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/20 04:28:44 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
