/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_Zombie.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:56:37 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/21 05:51:05 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
	return (new Zombie(name));
}

void	randomChump(std::string name) {
	Zombie zombie = Zombie(name);
	zombie.announce();
}
