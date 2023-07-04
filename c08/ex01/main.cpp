/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 02:01:24 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/04 04:05:13 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main() {
	std::cout << "---------------TEST1---------------" << std::endl;

	Span test = Span(5);
	try {
		// std::cout << "LonguestSpan = " << test.longuestSpan() << std::endl; // should throw exception
		test.addNumber(6);
		test.addNumber(3);
		test.addNumber(17);
		test.addNumber(9);
		test.addNumber(11);
		std::cout << "Vector1 : " << test << std::endl;
		std::cout << "LonguestSpan = " << test.longuestSpan() << std::endl;
		std::cout << "ShortestSpan = " << test.shortestSpan() << std::endl;
		test.addNumber(12);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------------TEST2---------------" << std::endl;
	int start = 0;
	int end = 20000;
	Span test2 = Span(end - start + 1);
	try {
		std::vector<int> myVector(end - start + 1);
		for (int i = start; i <= end; ++i) {
			myVector[i - start] = i;
		}
		test2.addNumbers(myVector.begin(), myVector.end());
		std::cout << "LonguestSpan = " << test2.longuestSpan() << std::endl;
		std::cout << "ShortestSpan = " << test2.shortestSpan() << std::endl;
		// std::cout << test2 << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
}

