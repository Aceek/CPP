/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 23:31:28 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/28 22:26:48 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("default", 100, 50, 20) {
	std::cout << "[ ScavTrap ] - Default constructor called for " << _name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "[ ScavTrap ] - Default constructor called for " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	*this = other;
	std::cout << "[ ScavTrap ] - Copy constructor called for " << _name << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "[ ScavTrap ] - Destructor called for " << _name << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return (*this);
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->_name << " enter in mod Gate keeper"
			<< std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	if (_energyPoint > 0) {
		std::cout << "ScavTrap "<<  _name << " attacks " << target << ", causing "
			<< _attackDamage << " points of damage !" << std::endl;
		_energyPoint -= 1;
	} else {
		std::cout << "ScavTrap " << _name << " out of energy" << std::endl;
	}
}

void	ScavTrap::printStatus() {
	std::cout << this->_name << " have " << this->_hitPoint
			<< " points of life and "
			<< this->_energyPoint << " of energy" << std::endl;
}