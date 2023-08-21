/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 02:01:24 by ilinhard          #+#    #+#             */
/*   Updated: 2023/08/21 13:06:33 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int	main() {
// 	std::cout << "---------------TEST1---------------" << std::endl;

// 	Span test = Span(5);
// 	try {
// 		// std::cout << "LonguestSpan = " << test.longuestSpan() << std::endl; // should throw exception
// 		test.addNumber(6);
// 		test.addNumber(3);
// 		test.addNumber(17);
// 		test.addNumber(9);
// 		test.addNumber(11);
// 		std::cout << "Vector1 : " << test << std::endl;
// 		std::cout << "LonguestSpan = " << test.longuestSpan() << std::endl;
// 		std::cout << "ShortestSpan = " << test.shortestSpan() << std::endl;
// 		test.addNumber(12); // should throw exception
// 	} catch(const std::exception& e) {
// 		std::cerr << e.what() << '\n';
// 	}

// 	std::cout << "---------------TEST2---------------" << std::endl;
// 	int start = 0;
// 	int end = 20000;
// 	Span test2 = Span(end - start + 1);
// 	try {
// 		std::vector<int> myVector(end - start + 1);
// 		for (int i = start; i <= end; ++i) {
// 			myVector[i - start] = i;
// 		}
// 		test2.addNumbers(myVector.begin(), myVector.end());
// 		std::cout << "LonguestSpan = " << test2.longuestSpan() << std::endl;
// 		std::cout << "ShortestSpan = " << test2.shortestSpan() << std::endl;
// 		// std::cout << test2 << std::endl; // show all tab
//  	} catch(const std::exception& e) {
// 		std::cerr << e.what() << '\n';
// 	}
// }

int main(void) {
    try {
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longuestSpan() << std::endl;
    } catch (std::exception const &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        Span sp(10);
        std::vector<int> numbers;
        numbers.push_back(6);
        numbers.push_back(3);
        numbers.push_back(17);
        numbers.push_back(9);
        numbers.push_back(11);
        sp.addNumbers(numbers.begin(), numbers.end());
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longuestSpan() << std::endl;
    } catch (std::exception const &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;
	
	try {
        Span sp(10000);
        for (int i = 0; i < 10000; ++i) {
			sp.addNumber(i);
		}
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longuestSpan() << std::endl;
    } catch (std::exception const &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        Span sp(3);
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);
        sp.addNumber(4); // Should throw FullContainerException
    } catch (std::exception const &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        Span sp(5);
        sp.addNumber(1);
        // std::cout << "Shortest span: " << sp.shortestSpan() << std::endl; // Should throw InvalidSpanDistanceException
        std::cout << "Longest span: " << sp.longuestSpan() << std::endl; // Should throw InvalidSpanDistanceException
    } catch (std::exception const &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
