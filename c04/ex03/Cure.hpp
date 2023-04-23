/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:22:40 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/23 04:47:56 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP_
#define CURE_HPP_

#include "AMateria.hpp"

class Cure : public AMateria {
 private:
 
 public:
	Cure();
	Cure(const Cure &other);
	~Cure();

	Cure	&operator=(const Cure &other);

	virtual AMateria* clone() const;
	// virtual void use(ICharacter& target); // a faire

};


#endif  // CURE_HPP_