/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 03:45:58 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/13 05:33:47 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main() {
	Data		*test = new Data;
	uintptr_t	ptr;
	

	test->nb = 42;
	test->raw = "Bonjour";

	ptr = Serializer::serialize(test);
	test = Serializer::deserialize(ptr);

	std::cout << "nb = " << test->nb << std::endl;
	std::cout << "raw = " << test->raw << std::endl;

	delete test;
}
