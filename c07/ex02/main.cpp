/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 12:45:44 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/13 06:14:42 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int	main() {

	std::cout << "----------------------INTTEST-------------------------" << std::endl;

	Array<int> intArray1(5);
	Array<int> intArray2;
	
	for (size_t i = 0; i < intArray1.size(); i++) {
		intArray1[i] = i;
	}
	std::cout << "Value intArray1 : " << intArray1 << std::endl; 
	std::cout << "Copy intArray1 in intArray2" << std::endl;
	intArray2 = intArray1;
	std::cout << "Modify intArray1 first value" << std::endl;
	intArray1[0] = 2;
	std::cout << "Value intArray2 :" << intArray2 << std::endl;
	std::cout << "Value intArray1 :" << intArray1 << std::endl;

	std::cout << "----------------------FLOATTEST-------------------------" << std::endl;
	
	Array<float> floatArray1(5);
	Array<float> floatArray2;
	
	for (float i = 0; i < floatArray1.size(); i++) {
		floatArray1[i] = i + i/7;
	}
	std::cout << "Value floatArray1 : " << floatArray1 << std::endl; 
	std::cout << "Copy floatArray1 in floatArray2" << std::endl;
	floatArray2 = floatArray1;
	std::cout << "Modify floatArray1 first value" << std::endl;
	floatArray1[0] = 2.489;
	std::cout << "Value floatArray2 :" << floatArray2 << std::endl;
	std::cout << "Value floatArray1 :" << floatArray1 << std::endl;		

	std::cout << "----------------------CHARTEST-------------------------" << std::endl;
	
	Array<char> charArray1(5);
	Array<char> charArray2;
	
	for (size_t i = 0; i < charArray1.size(); i++) {
		charArray1[i] = 'A' + i;
	}
	std::cout << "Value charArray1 : " << charArray1 << std::endl; 
	std::cout << "Copy charArray1 in charArray2" << std::endl;
	charArray2 = charArray1;
	std::cout << "Modify charArray1 first value" << std::endl;
	charArray1[0] = 'X';
	std::cout << "Value charArray2 :" << charArray2 << std::endl;
	std::cout << "Value charArray1 :" << charArray1 << std::endl;

	std::cout << "----------------------OUTOFBOUNDS-------------------------" << std::endl;
	try {
		intArray1[5];
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}