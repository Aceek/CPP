/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 09:48:59 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/09 00:55:35 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

bool	addFunc(int &value) {
	if (value < INT_MAX) {
		value += 1;
		return (true);
	}
	return (false);
}

void	stringFunc(std::string &value) {
	if (value.empty())
		return ;
	for (long unsigned int i = 0; i < value.size(); i++) {
		value[i] = std::toupper(value[i]);
	}
}

int	main() {

	std::cout << "Array 1 : " << std::endl;
	int array1[] = {0, 4, 2, 8, 1};
	iter(array1, 5, &addFunc);
	iter(array1, sizeof(array1) / sizeof(array1[0]), &Print<const int>);
	std::cout << std::endl;

	std::cout << "Array 2 : " << std::endl;
	float array2[] = {0.42, 4.52, 65, 8.4, 1.234};
	iter(array2, sizeof(array2) / sizeof(array2[0]), &Print<const float>);
	std::cout << std::endl;
	
	std::cout << "Array 3 : " << std::endl;
	char array3[] = {'a', 'b', 'c', 'd', 'e'};
	iter(array3, sizeof(array3) / sizeof(array3[0]), &Print<const char>);
	std::cout << std::endl;

	std::cout << "Array 4 : " << std::endl;
	std::string array4[] = {"Salut", "comment", "ca", "va", "ok"};
	iter(array4, sizeof(array4) / sizeof(array4[0]), &stringFunc);
	iter(array4, sizeof(array4) / sizeof(array4[0]), &Print<std::string>);
	std::cout << std::endl;

}
