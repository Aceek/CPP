/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 05:32:10 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/22 05:35:26 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_

#include <iostream>

class WrongAnimal {
 public:
	WrongAnimal(void);
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &animal);
	virtual ~WrongAnimal();

	WrongAnimal		&operator=(const WrongAnimal &animal);
	void			makeSound(void) const;
	std::string		getType(void) const;


 private:
	std::string _type;
};


#endif  // WRONGANIMAL_HPP_
