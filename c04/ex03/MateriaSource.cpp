/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 00:22:06 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/24 03:56:18 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

MateriaSource::MateriaSource() {
	// std::cout << "Class MateriaSource constructor called" << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		this->invetory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	*this = other;
}

MateriaSource::~MateriaSource() {
	// std::cout << "Class MateriaSource destructor called" << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (this->invetory[i]) {
			delete this->invetory[i];
		}
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	if (this != &other) {
		for (int i = 0; i < INVENTORY_SIZE; i++) {
			if (this->invetory[i]) {
				delete this->invetory[i];
			}
			if (other.invetory[i]) {
				this->invetory[i] = other.invetory[i]->clone();
			}
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *other) {
	if (other) {
		for (int i = 0; i < INVENTORY_SIZE; i++) {
			if (this->invetory[i] == NULL) {
				this->invetory[i] = other;
				std::cout << "MateriaSource equip Materia in slot : " << i << std::endl;
				return ;
			}
		}
		std::cout << "Can't stock this Materia : delete is the key" << std::endl;
		delete other;
	} else {
		std::cout << "Materia does not exist" << std::endl;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (this->invetory[i] && this->invetory[i]->getType() == type) {
			return (this->invetory[i]->clone());
		}
	}
	return (NULL);
}
