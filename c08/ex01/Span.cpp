/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 01:09:45 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/04 03:51:53 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N){
	std::cout << "[SPAN] class created with reserved place : " << N << std::endl;
	this->array.reserve(N);
}

Span::Span(const Span &other) {
	*this = other;
}

Span::~Span() {}

Span	&Span::operator=(const Span& other) {
	if (this != &other) {
		this->array = other.array;
	}
	return (*this);
}

const std::vector<int>&	Span::getVector() const{
	return (this->array);
}

void	Span::addNumber(int number) {
	if (this->array.capacity() > this->array.size()) {
		this->array.push_back(number);
	} else {
		throw std::overflow_error("[Overflow_error] Vector is already full");
	}
}

size_t	Span::longuestSpan() const {
	if (this->array.size() <= 1) {
		throw std::logic_error("Cannot find span : Not enough numbers");
	}
	std::vector<int>::const_iterator minIt = std::min_element(this->array.begin(), this->array.end());
	std::vector<int>::const_iterator maxIt = std::max_element(this->array.begin(), this->array.end());

	return (*maxIt - *minIt);
}

size_t	Span::shortestSpan() const {
	if (this->array.size() <= 1) {
		throw std::logic_error("Cannot find span : Not enough numbers");
	}
	std::vector<int> sortedVector(this->array);
	std::sort(sortedVector.begin(), sortedVector.end());
	
	size_t shortest = std::numeric_limits<int>::max(); 
	for (size_t i = 1; i < sortedVector.size(); i++) {
		size_t span = sortedVector[i] - sortedVector[i - 1];
		if (span < shortest) {
			shortest = span;
		}
	}
	return (shortest);
}

void	Span::addNumbers(std::vector<int>::const_iterator begin,
		std::vector<int>::const_iterator end) {
	if (end < begin) {
		throw std::logic_error("Begin must be smaller than end");
	}
	for (std::vector<int>::const_iterator it = begin; it != end; it++) {
		addNumber(*it);
	}
}

std::ostream &operator<<(std::ostream& os, const Span &obj) {
	for (std::vector<int>::const_iterator it = obj.getVector().begin();
			it != obj.getVector().end(); it++) {
		os << *it << " ";
	}
	return (os);
}
