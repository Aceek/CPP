/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:33:26 by ilinhard          #+#    #+#             */
/*   Updated: 2023/08/24 12:24:50 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av) {
	if (ac < 2) {
		std::cerr << "Error nb args" << std::endl;
		return (1);
	}

	try {
		PmergeMe pmm(ac, av);
	}
	catch(const std::runtime_error& e) {
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}