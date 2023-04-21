/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:06:39 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/21 05:55:47 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :_weapon(weapon), _name(name) {
	std::cout << "HumanA created : " << this->_name << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA destroyed : " << this->_name << std::endl;
}

void	HumanA::attack() const {
	std::cout << this->_name << " attacks with their "
			<< this->_weapon.getType() << std::endl;
}
