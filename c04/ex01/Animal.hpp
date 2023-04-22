/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 03:54:17 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/22 22:35:53 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
#include "Brain.hpp"

class Animal {
 public:
	Animal(void);
	Animal(std::string type);
	Animal(const Animal &animal);
	virtual ~Animal();

	Animal			&operator=(const Animal &animal);
	virtual void	makeSound(void) const;
	std::string		getType(void) const;


 private:
	std::string _type;
};


#endif  // ANIMAL_HPP_
