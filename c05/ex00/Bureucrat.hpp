/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 04:34:51 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/24 04:57:51 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREUCRAT_HPP_
#define BUREUCRAT_HPP_

#include <iostream>

class Bureucrat {

 public:
	Bureucrat()
	Bureucrat(std::string name, unsigned int grade);
	Bureucrat(const Bureucrat &other);
	~Bureucrat();
	
	Bureucrat		&operator=(const Bureucrat &other);

	std::string		&getName() const;
	unsigned int	getGrade() const;
 private:
	std::string const	_name;
	unsigned int		_grade;
};


#endif  // BUREUCRAT_HPP_
