/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 00:09:37 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/08 03:51:08 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _C08_EX02_MUTANTSTACK_HPP_
#define _C08_EX02_MUTANTSTACK_HPP_

#include <iostream>
#include <list>
#include <stack>
#include <deque>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
 public:
	MutantStack() : std::stack<T, Container>() {
		std::cout << "[MutantStack] class created" << std::endl;
	};

	~MutantStack() {
		std::cout << "[MutantStack] class destroyed" << std::endl;
	};

	MutantStack(const MutantStack<T, Container> &other)
			: std::stack<T, Container>(other) {
		
	};
	
	typedef typename Container::iterator iterator;

	iterator		begin() { return (this->c.begin()); }
	iterator		end()  { return (this->c.end()); }
	
	MutantStack&	operator=(const MutantStack<T, Container> &other) {
		if (this != &other) {
			std::stack<T, Container>::operator=(other);
		}
		return (*this);
	};

};

#endif  // _C08_EX02_MUTANTSTACK_HPP_
