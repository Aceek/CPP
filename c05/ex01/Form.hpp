/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:37:20 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/27 05:10:56 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP_
#define FORM_HPP_

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
 private:
	std::string const	_name;
	bool				_validate;
	int					_signedGrade;
	int					_executeGrade;

 public:
	Form();
	Form(int signedGrade, int executeGrade, std::string name);
	Form(const Form &other);
	~Form();
	
	Form				&operator=(const Form &other);


	const std::string	&getName() const;
	const bool			&getValidate() const;
	const int			&getSignedGrade() const;
	const int			&getExecuteGrade() const;
	
	void				beSigned(const Bureaucrat &b);


	class GradeTooLowException : public std::exception {
	 public:
		virtual const char* what() const throw();
	};

	class GradeTooHighException : public std::exception {
	 public:
		virtual const char* what() const throw();
	};

};

std::ostream &operator<<(std::ostream& os, const Form &f);


#endif  // FORM_HPP_
