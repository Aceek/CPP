/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:18:52 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/10 21:13:35 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
 private:
	std::string			_name;
	Weapon				*_weapon;
 public:
			HumanB(std::string name);
			~HumanB();
	void	attack() const;
	void	setWeapon(Weapon &weapon);	
};

#endif
