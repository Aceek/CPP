/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 02:14:41 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/21 04:44:53 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av) {

	if (ac != 2) {
		std::cout << "les args du con" << std::endl;
		return (1);
	}
	ScalarConverter::convert(av[1]);

    return 0;
}
