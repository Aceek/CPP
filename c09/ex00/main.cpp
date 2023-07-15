/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 05:34:02 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/15 08:45:13 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av) {

	if (ac != 2 || !av[1]) {
		std::cout << "Format is ./btc [inputfile]" << std::endl;
		return (1);
	}
	try	{
		BitcoinExchange test("data.csv");
		test.ProcessInput(av[1]);
		// test.PrintMap();
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return (0);	
}