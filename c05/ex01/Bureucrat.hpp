/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 04:34:51 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/27 04:10:20 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C05_EX00_BUREUCRAT_HPP_
#define C05_EX00_BUREUCRAT_HPP_

#include <iostream>
#include "Form.hpp"

class Form;

class Bureucrat {
 private:
	std::string const	_name;
	int					_grade;

 public:
	Bureucrat();
	Bureucrat(std::string name, int grade);
	Bureucrat(const Bureucrat &other);
	~Bureucrat();

	Bureucrat		&operator=(const Bureucrat &other);

	std::string	getName() const;
	int			getGrade() const;

	void	gradation();
	void	retrogradation();
	void	signForm(Form &f);

/*EXEPTION CLASS*/

	class GradeTooHighExeption : public std::exception {
	 public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
 	 public:
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream& os, const Bureucrat &b);

#endif  // C05_EX00_BUREUCRAT_HPP_
