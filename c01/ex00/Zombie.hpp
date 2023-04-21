/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:48:36 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/21 05:50:14 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C01_EX00_ZOMBIE_HPP_
#define C01_EX00_ZOMBIE_HPP_
#include <iostream>

class Zombie {
 private:
	std::string _name;

 public:
	explicit Zombie(std::string name);
	~Zombie();

	void	announce(void) const;
};

#endif  // C01_EX00_ZOMBIE_HPP_
