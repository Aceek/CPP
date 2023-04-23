/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 00:22:06 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/24 00:41:04 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "Class MateriaSource constructor called" << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		this->invetory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	*this = other;
}

MateriaSource::~MateriaSource() {
	std::cout << "Class MateriaSource destructor called" << std::endl;
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
			this->invetory[i] = other.invetory[i]->clone();
		}
	}
}

void	MateriaSource::learnMateria(AMateria *other) {
	if (other) {
		for (int i = 0; i < INVENTORY_SIZE; i++) {
			if (this->invetory[i] == NULL) {
				this->invetory[i] = other->clone();
				std::cout << "Copy Materia in slot : " << i << std::endl;
			}
		}
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
