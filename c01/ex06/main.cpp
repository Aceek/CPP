/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:57:42 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/12 16:16:46 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {
	if (ac != 2 || !av[1]) {
		std::cout << "Usage ./HarlFilter \"LEVEL\"" << std::endl;
		return (1);
	}
	Harl		harl;
	std::string	level(av[1]);
	harl.complain(level);
	return  (0);
}
