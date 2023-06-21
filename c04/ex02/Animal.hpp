/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 03:54:17 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/21 23:14:50 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
#include "Brain.hpp"

class AAnimal {
 public:
	AAnimal(void);
	AAnimal(std::string type);
	AAnimal(const AAnimal &animal);
	virtual ~AAnimal();

	AAnimal			&operator=(const AAnimal &animal);
	virtual void	makeSound(void) const = 0;
	std::string		getType(void) const;


 protected:
	std::string _type;
};


#endif  // ANIMAL_HPP_
