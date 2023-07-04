/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 00:52:50 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/04 03:51:11 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _C08_EX01_SPAN_HPP_
#define _C08_EX01_SPAN_HPP_

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

class Span {
private:
	std::vector<int>	array;
public:
	Span(unsigned int N);
	Span(const Span &other);
	~Span();

	Span&				operator=(const Span& other);

	const std::vector<int>&	getVector() const;
	void					addNumber(int nunber);
	size_t					shortestSpan() const;
	size_t					longuestSpan() const;
	void					addNumbers(std::vector<int>::const_iterator begin,
			std::vector<int>::const_iterator end);
};

std::ostream &operator<<(std::ostream& os, const Span &obj);

#endif  // _C08_EX01_SPAN_HPP_
