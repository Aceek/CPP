/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:27:21 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/26 05:26:00 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	std::cout << "Harl created" << std::endl;
}

Harl::~Harl(void) {
	std::cout << "Harl destroyed" << std::endl;
}

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my"
		" 7XL-double-cheese-triple-pickle-specialketchup burger."
		" I really do !" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money."
		" You didn’t put enough bacon in my burger ! If you did,"
		" I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free."
		" I’ve been coming for years"
		" whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable ! I want to speak to the manager now."
		<< std::endl;
}

void	Harl::complain(std::string level) {
	if (level == "EXIT")
		return ;
	typedef void (Harl::*harlComplain)();
	harlComplain complain[] =
		{&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0;
		i < static_cast<int>(sizeof(levels) / sizeof(levels[0])); i++) {
		if (level == levels[i]) {
			(this->*complain[i])();
			return ;
		}
	}
	std::cout << "Not valid command" << std::endl;
}
