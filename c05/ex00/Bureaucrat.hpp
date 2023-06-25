/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 04:34:51 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/26 07:25:55 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C05_EX00_BUREAUCRAT_HPP_
#define C05_EX00_BUREAUCRAT_HPP_

#include <iostream>

class Bureaucrat {
 private:
	std::string const	_name;
	int					_grade;

 public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();

	Bureaucrat		&operator=(const Bureaucrat &other);

	std::string const	&getName() const;
	int					getGrade() const;

	void				gradation();
	void				retrogradation();

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

std::ostream &operator<<(std::ostream& os, const Bureaucrat &b);

#endif  // C05_EX00_BUREAUCRAT_HPP_
