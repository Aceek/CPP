/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 04:46:39 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/23 00:17:54 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#define SIZE 10

int main()
{

	Animal *test[SIZE];

	for (int i = 0; i < SIZE; i++) {
		if (i < SIZE/2) {
			test[i] = new Dog;
		} else {
			test[i] = new Cat;
		}
	}

	for (int i = 0; i < SIZE; i++) {
			delete test[i];
	}

	Animal *test1 = new Cat;
	Animal *test2 = new Cat;

	dynamic_cast<Cat*>(test1)->operator=(*dynamic_cast<Cat*>(test2));


	delete test1;
	delete test2;


	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Cat	*k = new Cat();


	delete j;//should not create a leak
	delete i;
	delete k;

	return 0;
}