/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:06:09 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/28 22:03:48 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap trap("Jean");
	ClapTrap trap2("Pauline");
	ClapTrap trap3(trap);
	ClapTrap trap4;
	trap4.operator=(trap2);
	std::cout << std::endl;

    trap.printStatus();
    trap.attack("enemy");
    trap.takeDamage(5);
    trap.beRepaired(3);
    trap.printStatus();

	std::cout << std::endl;

    trap2.printStatus();
	trap2.attack("enemy");
    trap2.takeDamage(10);
    trap2.beRepaired(2);
    trap2.printStatus();
	std::cout << std::endl;

    return 0;
}