/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 04:20:42 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/13 05:44:04 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main() {
	Base	test;
	Base	*ptr;

	ptr = test.generate();
	test.identify(ptr);
	if (ptr != NULL) {
		Base	&ref =  *ptr;
		test.identify(ref);
	}
	delete ptr;
	return (0);
}