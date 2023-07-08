/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 01:01:50 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/08 03:45:04 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{

	std::cout << "------------------TEST1------------------" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top stack = " <<mstack.top() << std::endl;
	mstack.pop();
	std::cout << "stack size = " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "----------------COMPARETEST1--------------" << std::endl;
	
	std::list<int> mstack_list;
	mstack_list.push_back(5);
	mstack_list.push_back(17);
	std::cout << "top stack = " << mstack_list.back() << std::endl;
	mstack_list.pop_back();
	std::cout << "stack size = " << mstack_list.size() << std::endl;
	mstack_list.push_back(3);
	mstack_list.push_back(5);
	mstack_list.push_back(737);
	//[...]
	mstack_list.push_back(0);
	
	std::list<int>::iterator it2 = mstack_list.begin();
	std::list<int>::iterator ite2 = mstack_list.end();
	++it2;
	--it2;
	while (it2 != ite2) {
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::stack<int, std::list<int> > s2(mstack_list);


	std::cout << "----------------VECTORTEST----------------" << std::endl;

	std::vector<int> vectorVerify;
	vectorVerify.push_back(5);
	vectorVerify.push_back(17);
	std::cout << "top stack = " << *(vectorVerify.end() - 1) << std::endl;
	vectorVerify.pop_back();
	std::cout << "stack size = " << vectorVerify.size() << std::endl;
	vectorVerify.push_back(3);
	vectorVerify.push_back(5);
	vectorVerify.push_back(737);
	vectorVerify.push_back(0);
	std::vector<int>::iterator it3 = vectorVerify.begin();
	std::vector<int>::iterator ite3 = vectorVerify.end();
	++it3;
	--it3;
	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}
	std::stack<int, std::vector<int> > s3(vectorVerify);

	return 0;
}