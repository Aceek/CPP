/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 04:12:19 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/28 22:44:30 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
	this->_name = "default";
    FragTrap::_hitPoint = 100;
    ScavTrap::_energyPoint = 50;
    FragTrap::_attackDamage = 30;
	std::cout << "[ DiamondTrap ] - Default constructor called for "
			<< _name << std::endl;

}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
		ScavTrap(name), FragTrap(name), _name(name) {
	this->_name = name;
    FragTrap::_hitPoint = 100;
    ScavTrap::_energyPoint = 50;
    FragTrap::_attackDamage = 30;
	std::cout << "[ DiamondTrap ] - Default constructor called for "
			<< _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other),
		ScavTrap(other), FragTrap(other) {
	*this = other;
	std::cout << "[ DiamondTrap ] - Copy constructor called for "
			<< _name << std::endl;

}

DiamondTrap::~DiamondTrap() {
	std::cout << "[ DiamondTrap ] - Destructor called for " << _name << std::endl;
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

void	DiamondTrap::printStatus() {
	std::cout << this->_name << " have " << this->_hitPoint
			<< " points of life and "
			<< this->_energyPoint << " of energy" << std::endl;
}
