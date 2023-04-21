/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:48:36 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/21 05:51:56 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C01_EX01_ZOMBIE_HPP_
#define C01_EX01_ZOMBIE_HPP_
#include <iostream>

class Zombie {
 private:
	std::string _name;

 public:
	Zombie();
	~Zombie();

	void	announce(void) const;
	void	setName(std::string name);
};

#endif  // C01_EX01_ZOMBIE_HPP_
