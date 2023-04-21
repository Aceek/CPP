/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:17:05 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/21 05:52:29 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main() {
	const std::string brain = "HI THIS IS BRAIN";
	const std::string &ref = brain;
	const std::string *pointeur = &brain;

	std::cout << "Adresse de la string en memoire : " << &brain << std::endl;
	std::cout << "Adresse stocké du pointeur : " << pointeur << std::endl;
	std::cout << "Adresse stocké de la reference : " << &ref << std::endl;

	std::cout << std::endl;

	std::cout << "Valeur de la string : " << brain << std::endl;
	std::cout << "valeur pointée par pointeur : " << *pointeur << std::endl;
	std::cout << "valeur pointée par la reference : " << ref << std::endl;
}
