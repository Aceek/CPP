/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:00:00 by ilinhard          #+#    #+#             */
/*   Updated: 2023/08/24 15:04:30 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include <list>
#include <deque>
#include <ctime>

class PmergeMe {
 public:
	PmergeMe();
	PmergeMe(int ac, char** &args);
	~PmergeMe();
	PmergeMe(const PmergeMe &other);
	PmergeMe &operator=(const PmergeMe &other);

	template <typename T>
	void	printContainer(T &container);
	void	execSort();
	template <typename T>
	void	mergeInsertSort(T &container);
	template <typename T>
	void	merge(T &container, T &left, T &right);
	
 private:
	std::list<int>	sortedList;
	std::deque<int>	sortedDeque;
	
};
