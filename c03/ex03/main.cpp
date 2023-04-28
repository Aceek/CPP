/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 05:54:23 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/28 22:46:58 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main(void) {
    DiamondTrap trap("Pauline");
	DiamondTrap trap2("George");
	DiamondTrap trap3(trap);
	DiamondTrap trap4;
	trap4.operator=(trap2);
	std::cout << std::endl;

    trap.printStatus();
    trap.attack("enemy");
    trap.takeDamage(5);
    trap.beRepaired(3);
	trap.guardGate();
	trap.highFivesGuys();
	trap.whoAmI();
	std::cout << std::endl;

    trap2.printStatus();
	trap2.attack("enemy");
    trap2.takeDamage(100);
    trap2.beRepaired(50);
	trap2.guardGate();
	trap2.highFivesGuys();
	trap2.whoAmI();
	std::cout << std::endl;

    return 0;
}
