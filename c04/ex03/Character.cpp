/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:58:37 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/23 05:28:58 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("noname") {
	std::cout << "Class Character constructor called" << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		this->inventory[i] = NULL;
	}
	
}

Character::Character(std::string name) : _name(name) {
	std::cout << "Class Character constructor called" << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		this->inventory[i] = NULL;
	}
}

Character::~Character() {
	std::cout << "Class Character destructor called" << std::endl;
}

Character::Character(const Character &other) {
	*this = other;
}

Character	&Character::operator=(const Character &other) {
	if (this != &other) {
		this->_name = other._name;
		for (int i = 0; i < INVENTORY_SIZE; i++) {
			this->inventory[i] = other.inventory[i];
		}
		
	}
}

std::string const &Character::getName() const {
	return (this->_name);
}

void	Character::equip(AMateria *m) {
	if (!m) {
		std::cout << "Materia does not exist : Can't equip" << std::endl;
		return ;
	}
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (this->inventory[i] == NULL) {
			std::cout << "Materia equip at index " << i << std::endl;
			this->inventory[i] = m;
		}
	}
}

void	Character::unequip(int idx) {
	if ((idx >= 0 && idx <= INVENTORY_SIZE) && this->inventory[idx] != NULL) {
		std::cout << "unequip materia : " << this->inventory[idx]->getType()
		<< std::endl;
	} else {
		std::cout << "Can't unequip Materia" << std::endl;
	}
}