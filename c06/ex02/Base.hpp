/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 04:10:06 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/27 09:07:49 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C06_EX02_BASE_HPP_
#define C06_EX02_BASE_HPP_

#include <iostream>
#include <cstdlib>

class Base {
 public:
	virtual ~Base();

	Base*	generate(void);
	void	identify(Base* p);
	void	identify(Base& p);

};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif  // C06_EX02_BASE_HPP_