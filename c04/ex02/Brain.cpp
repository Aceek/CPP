/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 22:27:07 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/22 22:32:59 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Class Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
	*this = other;
}

Brain::~Brain() {
	std::cout << "Class Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &other) {
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}