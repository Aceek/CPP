/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 05:54:23 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/25 02:57:43 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main() {
    DiamondTrap diam("Sylvain");
    DiamondTrap diam2("Michel");
    DiamondTrap diam3(diam);
    DiamondTrap diam4;
	diam4.operator=(diam2);
    std::cout << std::endl;

    diam.attack("enemy");
    diam.takeDamage(5);
    diam.beRepaired(3);
    diam.whoAmI();
    std::cout << std::endl;

    diam2.attack("enemy");
    diam2.takeDamage(10);
    diam2.beRepaired(2);
    diam2.whoAmI();
    std::cout << std::endl;

    diam3.attack("enemy");
    diam3.takeDamage(2);
    diam3.beRepaired(5);
    diam3.whoAmI();
    std::cout << std::endl;

    diam4.attack("enemy");
    diam4.takeDamage(2);
    diam4.beRepaired(5);
    diam4.whoAmI();
    std::cout << std::endl;

    return 0;
}