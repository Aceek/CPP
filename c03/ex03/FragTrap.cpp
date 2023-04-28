/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 23:31:28 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/28 22:44:38 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("default", 100, 100, 30) {
	std::cout << "[ FragTrap ] - Default constructor called for "
			<< _name << std::endl;

}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
	std::cout << "[ FragTrap ] - Default constructor called for "
			<< _name << std::endl;

}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	*this = other;
	std::cout << "[ FragTrap ] - Copy constructor called for "
			<< _name << std::endl;

}

FragTrap::~FragTrap(void) {
	std::cout << "[ FragTrap ] - Destructor called for "
			<< _name << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "Let's high fives guys !" << std::endl;
}

void	FragTrap::printStatus() {
	std::cout << this->_name << " have " << this->_hitPoint
			<< " points of life and "
			<< this->_energyPoint << " of energy" << std::endl;
}