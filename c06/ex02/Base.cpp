/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 04:13:36 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/26 04:45:33 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {};

Base*	Base::generate(void) {
	srand(time(NULL));
	int	i = rand() % 3;

	switch (i)
	{
	case 0:
		std::cout << "Return class A" << std::endl;
		return (new A);	
	case 1:
		std::cout << "Return class B" << std::endl;
		return (new B);	
	case 2:
		std::cout << "Return class C" << std::endl;
		return (new C);	
	default:
		std::cout << "Error generating number" << std::endl;
	}
	return (NULL);
}

void	Base::identify(Base *p) {
	A* ptrA = dynamic_cast<A*>(p);
	B* ptrB = dynamic_cast<B*>(p);
	C* ptrC = dynamic_cast<C*>(p);
	if (ptrA != NULL) {
		std::cout << "Le pointeur appartient a la class A" << std::endl;
	} else if (ptrB != NULL) {
		std::cout << "Le pointeur appartient a la class B" << std::endl;
	} else if (ptrC != NULL) {
		std::cout << "Le pointeur appartient a la class C" << std::endl;
	} else {
		std::cout << "Le pointeur appartient a aucune des 3 class" << std::endl;
	}
}

void	Base::identify(Base &p) {
	std::string identify = "no class";
	try {
		dynamic_cast<A&>(p);
		identify = "class A";
	} catch(const std::exception& e) {}
	try {
		dynamic_cast<B&>(p);
		identify = "class B";
	}
	catch(const std::exception& e) {}
	try {
		dynamic_cast<C&>(p);
		identify = "class C";
	}
	catch(const std::exception& e) {}
	
	std::cout << "La ref pointe vers la : " << identify << std::endl;
}