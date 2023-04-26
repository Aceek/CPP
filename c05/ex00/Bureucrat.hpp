/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 04:34:51 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/26 07:15:07 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C05_EX00_BUREUCRAT_HPP_
#define C05_EX00_BUREUCRAT_HPP_

#include <iostream>

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

#endif  // C05_EX00_BUREUCRAT_HPP_
