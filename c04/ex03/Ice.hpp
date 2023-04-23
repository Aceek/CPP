/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:22:40 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/23 04:47:50 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP_
#define ICE_HPP_

#include "AMateria.hpp"

class Ice : public AMateria {
 private:
 
 public:
	Ice();
	Ice(const Ice &other);
	~Ice();

	Ice	&operator=(const Ice &other);

	virtual AMateria* clone() const;
	// virtual void use(ICharacter& target);

};


#endif  // ICE_HPP_