/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:18:52 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/21 05:58:03 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C01_EX03_HUMANB_HPP_
#define C01_EX03_HUMANB_HPP_

#include "Weapon.hpp"

class HumanB {
 private:
	std::string			_name;
	Weapon				*_weapon;
 public:
	explicit HumanB(std::string name);
			~HumanB();
	void	attack() const;
	void	setWeapon(Weapon &weapon);
};

#endif  // C01_EX03_HUMANB_HPP_
