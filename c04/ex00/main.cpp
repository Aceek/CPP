/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 04:46:39 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/22 05:03:55 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Chat.hpp"
#include "Chien.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Chien();
const Animal* i = new Chat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
// delete meta;
// delete j;
// delete i;

return 0;
}