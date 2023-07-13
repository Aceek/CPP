/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:37:20 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/13 04:39:41 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP_
#define AFORM_HPP_

#include "Bureaucrat.hpp"
#include <fstream>
class Bureaucrat;

class AForm {
 private:
	std::string const	_name;
	bool				_validate;
	const int			_signedGrade;
	const int			_executeGrade;

 public:
	AForm();
	AForm(const int signedGrade, const int executeGrade, std::string name);
	AForm(const AForm &other);
	virtual ~AForm();
	
	AForm				&operator=(const AForm &other);


	const std::string	&getName() const;
	const bool			&getValidate() const;
	const int			&getSignedGrade() const;
	const int			&getExecuteGrade() const;
	
	void				beSigned(const Bureaucrat &b);

	virtual void		execute(Bureaucrat const & executor) const = 0;


	class GradeTooLowException : public std::exception {
	 public:
		const char* what() const throw();
	};

	class GradeTooHighException : public std::exception {
	 public:
		const char* what() const throw();
	};

	class NotSignedExeption : public std::exception {
	 public:
		const char* what() const throw();
	};

};

std::ostream &operator<<(std::ostream& os, const AForm &f);


#endif  // AFORM_HPP_
