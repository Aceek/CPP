/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:22:40 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/24 03:55:12 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP_
#define CURE_HPP_

#include "includes.hpp"

class Cure : public AMateria {
 private:
 
 public:
	Cure();
	Cure(const Cure &other);
	~Cure();

	Cure	&operator=(const Cure &other);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

};

#endif  // CURE_HPP_
