/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chat.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 04:25:57 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/22 05:11:52 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Chat.hpp"

Chat::Chat(void) : Animal("chat") {
	std::cout << "Class Chat constructor called" << std::endl;
}

Chat::Chat(const Chat &chat) : Animal(chat) {
	*this = chat;
}

Chat::~Chat(void) {
	std::cout << "Class Chat destructor called" << std::endl;
}

Chat	&Chat::operator=(const Chat &chat) {
	if (this != &chat) {
		Animal::operator=(chat);
	}
	return (*this);
}

void	Chat::makeSound(void) const {
	std::cout << "Miaou Miaou" << std::endl;
}
