/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 04:23:28 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/23 02:13:23 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
#define CAT_HPP_

#include "Animal.hpp"

class Cat : public AAnimal {
 public:
	Cat(void);
	Cat(const Cat &cat);
	~Cat(void);

	Cat			&operator=(const Cat &cat);
	virtual void	makeSound() const;

 private:
	Brain	*brain;

};

#endif  // CAT_HPP_
