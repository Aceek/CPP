/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:07:25 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/23 04:38:18 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP_
#define AMATERIA_HPP_

#include <iostream>

class AMateria
{
 protected:
	std::string	_type;
 public:
	AMateria(void);
	AMateria(std::string const & type);
	AMateria(const AMateria &other);
	~AMateria();

	AMateria &operator=(const AMateria &other);

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	// virtual void use(ICharacter& target); // a faire

};

#endif  // AMATERIA_HPP_