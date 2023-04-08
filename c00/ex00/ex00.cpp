/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:06:52 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/08 12:58:48 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_uppercase(std::string c) {
	for (int i = 0; c[i] != '\0'; i++) {
		if (c[i] >= 97 && c[i] <= 122)
			c[i] = c[i] - 32;
	}
	std::cout << c;
}

int	main(int ac, char **av) {
	if (ac == 1 && av) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else {
		for (int i = 1; i < ac; i++)
			ft_uppercase(av[i]);
		std::cout << std::endl;
	}
	return (0);
}
