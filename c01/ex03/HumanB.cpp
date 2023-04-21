/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:21:48 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/21 05:56:45 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :_name(name), _weapon(NULL) {
	std::cout << "HumanA created : " << this->_name << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanB destroyed : " << this->_name << std::endl;
}

void	HumanB::attack() const {
	if (this->_weapon) {
		std::cout << this->_name << " attacks with their "
				<< this->_weapon->getType() << std::endl;
	} else if (!this->_weapon) {
		std::cout << this->_name << " attacks with nothing" << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}
