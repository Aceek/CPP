/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 02:14:41 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/13 05:29:44 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av) {

	if (ac != 2 || !av[1] ||!ScalarConverter::isValidInput(av[1])) {
		std::cerr << "Non valid input retry" << std::endl;
		return (1);
	}
	ScalarConverter::convert(av[1]);

    return 0;
}
