/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:26:03 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/10 16:31:47 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main() {
	Zombie		*horde;
	int			NbZombie;

	NbZombie = 5;
	horde = zombieHorde(NbZombie, "cuck");
	delete[] horde;
	return (0);
}
