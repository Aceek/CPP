/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 04:10:06 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/26 04:32:12 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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