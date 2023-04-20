/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:06:09 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/20 01:57:02 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main() {
	ScavTrap dalek("dalek");
	ClapTrap dalek2("ilan");

	dalek2.attack("epee");
	dalek.attack("notme");
	dalek.takeDamage(15);
	dalek.beRepaired(10);
}