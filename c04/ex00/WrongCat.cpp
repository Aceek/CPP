/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 05:37:06 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/22 05:38:21 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongChat::WrongChat(void) : WrongAnimal("chat") {
	std::cout << "Class WrongChat constructor called" << std::endl;
}

WrongChat::WrongChat(const WrongChat &chat) : WrongAnimal(chat) {
	*this = chat;
}

WrongChat::~WrongChat(void) {
	std::cout << "Class WrongChat destructor called" << std::endl;
}

WrongChat	&WrongChat::operator=(const WrongChat &chat) {
	if (this != &chat) {
		WrongAnimal::operator=(chat);
	}
	return (*this);
}

void	WrongChat::makeSound(void) const {
	std::cout << "Miaou Miaou" << std::endl;
}
