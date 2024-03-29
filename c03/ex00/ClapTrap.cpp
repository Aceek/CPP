/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:02:23 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/28 22:30:12 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default"), _hitPoint(10),
	_energyPoint(10), _attackDamage(0) {
	std::cout << "[ ClapTrap ] - Default constructor called for "
			<< _name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10),
	_energyPoint(10), _attackDamage(0) {
	std::cout << "[ ClapTrap ] - Default constructor called for "
			<< _name << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "[ ClapTrap ] - Destructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
	std::cout << "[ ClapTrap ] - Copy constructor called for "
			<< _name << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoint = other._hitPoint;
		this->_energyPoint = other._energyPoint;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	if (_energyPoint > 0) {
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
			<< _attackDamage << " points of damage !" << std::endl;
		_energyPoint -= 1;
	} else {
		std::cout << "ClapTrap" << _name << " out of energy" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amout) {
	if (_hitPoint > 0) {
		std::cout << "ClapTrap " << _name << " take " << amout
			<< " points of damage" << std::endl;
		_hitPoint -= amout;
		if (_hitPoint <= 0) {
			std::cout << "ClapTrap " << _name << " died after this attack" << std::endl;
		}
	} else if (_hitPoint < 0) {
		std::cout << "ClapTrap " << _name << "alredy dead" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amout) {
	if (_hitPoint > 0 && _energyPoint > 0) {
		std::cout << "Clap trap " << _name << " self repair for " << amout
			<< " point" << std::endl;
		_hitPoint+= amout;
		if (_hitPoint > 10)
			_hitPoint = 10;
		_energyPoint -= 1;
	} else if (_hitPoint <= 0) {
		std::cout << "ClapTrap " << _name << " alredy dead" << std::endl;
	} else if (_energyPoint <= 0) {
		std::cout << "Clap trap " << _name << " out of energy" << std::endl;
	}
}

void	ClapTrap::printStatus() {
	std::cout << this->_name << " have " << this->_hitPoint
			<< " points of life and "
			<< this->_energyPoint << " of energy" << std::endl;
}