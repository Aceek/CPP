/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 04:32:36 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/23 02:13:27 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"

class Dog : public AAnimal {
 public:
	Dog(void);
	Dog(const Dog &dog);
	~Dog(void);

	Dog			&operator=(const Dog &dog);
	virtual void	makeSound(void) const;

 private:
	Brain	*brain;
 
};

#endif  // DOG_HPP_

