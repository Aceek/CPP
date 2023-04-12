/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:27:21 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/12 16:30:28 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
}

Harl::~Harl(void) {
}

void	Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my"
		" 7XL-double-cheese-triple-pickle-specialketchup burger."
		" I really do !" << std::endl << std::endl;
}

void	Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."
		" You didn’t put enough bacon in my burger ! If you did,"
		" I wouldn’t be asking for more !" << std::endl << std::endl;
}

void	Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."
		" I’ve been coming for years"
		" whereas you started working here since last month." << std::endl
			<< std::endl;
}

void	Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now."
		<< std::endl << std::endl;
}

void	Harl::complain(std::string level) {
	typedef void (Harl::*harlComplain)();
	int				levelCount(-1);
	harlComplain	complain[] =
		{&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0;
		i < static_cast<int>(sizeof(levels) / sizeof(levels[0])); i++) {
		if (levels[i] == level) {
			levelCount = i;
		}
	}
	switch (levelCount) {
	case DEBUG:
		(this->*complain[DEBUG])();
		(this->*complain[INFO])();
		(this->*complain[WARNING])();
		(this->*complain[ERROR])();
		break;
	case INFO:
		(this->*complain[INFO])();
		(this->*complain[WARNING])();
		(this->*complain[ERROR])();
		break;
	case WARNING:
		(this->*complain[WARNING])();
		(this->*complain[ERROR])();
		break;
	case ERROR:
		(this->*complain[ERROR])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]"
			<< std::endl;
		break;
	}
}
