/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:06:47 by ilinhard          #+#    #+#             */
/*   Updated: 2023/08/24 15:12:28 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(int ac, char** &args) {

	std::string			input;
	int					nb;

	for (int i = 1; i < ac; i++) {
		input = args[i];
		std::istringstream	ss(input);
		while (ss >> nb || !ss.eof()) {
			if (ss.fail() || nb < 0) {
				throw std::runtime_error("Error in extraction number from string");
			}
			this->sortedDeque.push_back(nb);
			this->sortedList.push_back(nb);
		}
	}
	if (this->sortedDeque.empty() || sortedList.empty()) {
		throw std::runtime_error("Error : Container empty");
	}
	execSort();
}

PmergeMe::PmergeMe(const PmergeMe &other) {
	*this = other;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &other) {
	if (this != &other) {
		this->sortedDeque = other.sortedDeque;
		this->sortedList = other.sortedList;
	}
	return (*this);
}

PmergeMe::~PmergeMe() {};

template <typename T>
void	PmergeMe::printContainer(T &container) {
	for (typename T::iterator it = container.begin();
			it != container.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template <typename T>
void	PmergeMe::merge(T &container, T &left, T &right) {

	typename T::iterator it1 = left.begin();
	typename T::iterator it2 = right.begin();

	while (it1 != left.end() && it2 != right.end()) {
		if (*it1 < *it2) {
			container.push_back(*it1);
			it1++;
		} else {
			container.push_back(*it2);
			it2++;
		}
	}
	container.insert(container.end(), it1, left.end());
	container.insert(container.end(), it2, right.end());
	
}

template <typename T>
void	PmergeMe::mergeInsertSort(T &container) {

	if (container.size() < 2) {
		return ;
	}

	typename T::iterator	middle = container.begin();
	std::advance(middle, container.size() / 2);
	T left(container.begin(), middle);
	T right(middle, container.end());

	mergeInsertSort(left);
	mergeInsertSort(right);
	container.clear();
	merge(container, left, right);
}

void	PmergeMe::execSort() {
	std::cout << "Before : ";
	printContainer(this->sortedDeque);
	std::cout <<"After : ";
	clock_t	startTimeDeque = clock();
	mergeInsertSort(this->sortedDeque);
	clock_t endTimeDeque = clock();
	clock_t statTimeList = clock();
	mergeInsertSort(this->sortedList);
	clock_t endTimeList = clock();
	printContainer(this->sortedDeque);
	double timeList = static_cast<double>(endTimeList - statTimeList) / CLOCKS_PER_SEC * 1000;
	double timeDeque = static_cast<double>(endTimeDeque - startTimeDeque) / CLOCKS_PER_SEC * 1000;
	std::cout << "Time to process a range of " << this->sortedDeque.size()
		<< " element with std::deque : " << timeDeque << " us" <<  std::endl;
	std::cout << "Time to process a range of " << this->sortedList.size()
		<< " element with std::list : " << timeList << " us" <<  std::endl;
}

