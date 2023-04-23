/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 04:46:39 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/23 02:23:16 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#define SIZE 10

int main()
{

	Cat *cat1 = new Cat;
	Cat *cat2 = new Cat;
	Dog *dog1 = new Dog;
	Dog test(*dog1);
	(void)test;

	cat1->operator=(*cat2);

	delete cat1;
	delete cat2;
	delete dog1;


	const Dog* j = new Dog();
	const Cat* i = new Cat();
	const Cat	*k = new Cat();


	delete j;//should not create a leak
	delete i;
	delete k;

	return 0;
}