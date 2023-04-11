/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:26:03 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/10 15:38:57 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "manage_Zombie.hpp"

int	main() {
	std::string	name = "";
	Zombie		*zombie1;

	std::cout << "Create zombie on heap" << std::endl;
	zombie1 = newZombie("Ace");
	zombie1->announce();
	delete zombie1;
	std::cout << "Create zombie on stack" << std::endl; 
	randomChump("Ilan");
	return (0);
}