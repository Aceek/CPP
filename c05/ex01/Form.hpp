/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:37:20 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/26 23:57:04 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP_
#define FORM_HPP_

#include <iostream>

class Form {

 public:
	Form();
	Form(int signedGrade, int executeGrade, std::string name);
	Form(const Form &other);
	~Form();
	
	Form	&operator=(const Form &other);


	std::string	getName();
	bool		getValidate();
	int			getSignedGrade();
	int			getExecuteGrade();

 private:
	std::string const	_name;
	bool				_validate;
	int					_signedGrade;
	int					_executeGrade;
};

std::ostream &operator<<(std::ostream& os, const Form &f);


#endif  // FORM_HPP_
