/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 00:36:51 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/24 03:55:55 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

int	main()
{
	/*TEST 1 */
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;


	/*TEST 2 */
	IMateriaSource *src1 = new MateriaSource();
	src1->learnMateria(new Ice());
	src1->learnMateria(new Cure());
	src1->learnMateria(new Cure());
	src1->learnMateria(new Cure());
	src1->learnMateria(new Cure());

	ICharacter *me1 = new Character("me");
	ICharacter *notme = new Character("notme");

	AMateria *tmp1;
	tmp1 = src1->createMateria("ice");
	me1->equip(tmp1);
	me1->unequip(0);
	me1->equip(tmp1);
	me1->use(0, *me1);
	me1->use(1, *me1);
	
	//delete tmp1;
	delete notme;
	delete src1;
	delete me1;

}