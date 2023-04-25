/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 04:12:19 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/25 02:59:00 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
	this->_name = "default";
	std::cout << "Class DiamondTrap created base on ScavTrap, FragTrap class"
			<< std::endl;
    FragTrap::_hitPoint = 100;
    ScavTrap::_energyPoint = 50;
    FragTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
		ScavTrap(name), FragTrap(name), _name(name) {
		this->_name = name;
	std::cout << "Class DiamondTrap created with name : " << _name
		<< " base on ScavTrap, FragTrap class" << std::endl;
    FragTrap::_hitPoint = 100;
    ScavTrap::_energyPoint = 50;
    FragTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other),
		ScavTrap(other), FragTrap(other) {
	*this = other;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Class DiamondTrap destroyed" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other) {
	if (this != &other) {
		ClapTrap::operator=(other);
		ScavTrap::operator=(other);
		FragTrap::operator=(other);
		this->_name = other._name;
	}
	return (*this);
}

void	DiamondTrap::whoAmI() {
	std::cout << "My name is " << _name << " and my ClapTrap name is "
			<< ClapTrap::_name << std::endl;
}
