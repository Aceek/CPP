/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:46:40 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/10 21:16:06 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string string) : _string(string) {
	std::cout << "Weapon created : " << this->_string << std::endl;	
}

Weapon::~Weapon() {
	std::cout << "Weapon destroyed : " << this->_string << std::endl;
}

const std::string	&Weapon::getType() const {
	const std::string &string = this->_string;
	return (string);
}

void	Weapon::setType(std::string string) {
	this->_string = string;
}