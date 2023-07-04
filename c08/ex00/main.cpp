/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:54:21 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/04 00:41:17 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

bool	ft_atoi(char *string, int *nb) {
	int			sign = 1;
	int			i = 0;
	long int	res = 0;
	int			max = 0;

	if (string[i] == '+' || string[i] == '-')
	{
		if (string[i] == '-')
			sign = -1;
		i++;
	}
	while (string[i] >= '0' && string[i] <= '9') {
		res = res * 10 + (string[i] - '0');
		max++;
		i++;
	}
	res *= sign;
	if (string[i] != '\0' || max > 10 || i == 0
			|| (i == 1 && (string[0] == '+' || string[0] == '-'))
			|| res > INT_MAX || res < INT_MIN)
		return (false);

	*nb = res;
	return (true);
}

int	main(int ac, char **av) {

	int		number = 0;
	bool	valid = false;
	

	if (ac != 2) {
		std::cout << "Put number to find in container, max one value" << std::endl;
		return (EXIT_FAILURE);
	}
	valid = ft_atoi(av[1], &number);
	if (!valid) {
		std::cout << "Arg not valid int number, format : ./easyfind [INT_NUMBER] " << std::endl;
		return (EXIT_FAILURE);
	}

	int	array[] = {0, 1, 2, 8, 9, 12, 15, -2147483648};
	std::vector<int> test(array, array + sizeof(array) / sizeof(array[0]));
	std::list<int> test2(array, array + sizeof(array) / sizeof(array[0]));
	std::deque<int> test3(array, array + sizeof(array) / sizeof(array[0]));

	easyfind(test, number);
	easyfind(test2, number);
	easyfind(test3, number);

	return (EXIT_SUCCESS);
}
