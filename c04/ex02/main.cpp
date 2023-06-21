/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 04:46:39 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/21 23:41:11 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#define SIZE 10

int main()
{
	// AAnimal test;
	
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	std::cout << std::endl;

	AAnimal	*animalList[10];
	
	for (int i = 0; i < 10 ; i++) {
		if (i % 2 == 0) {
			animalList[i] = new Cat();
		} else {
			animalList[i] = new Dog();
		}
	}
	std::cout	<< std::endl;

	for (int i = 0; i < 10 ; i++) {
		std::cout	<< "Random " << animalList[i]->getType() << ": " << std::flush;
		animalList[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	
	for (int i = 0; i < 10 ; i++) {
		delete animalList[i];
	}
}