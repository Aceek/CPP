/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chien.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 04:32:36 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/22 05:11:18 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHIEN_HPP_
#define CHIEN_HPP_

#include "Animal.hpp"

class Chien : public Animal {
 public:
	Chien(void);
	Chien(const Chien &chien);
	~Chien(void);

	Chien			&operator=(const Chien &chien);
	virtual void	makeSound(void) const;

 private:
};

#endif  // CHIEN_HPP_

