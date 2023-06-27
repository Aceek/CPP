/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 09:45:17 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/27 11:52:32 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _C07_EX01_ITER_HPP_
#define _C07_EX01_ITER_HPP_

#include <iostream>
#include <climits>

bool	addFunc(int &value);
void	stringFunc(std::string &value);

template <typename T>
void	Print(const T &value) {
	std::cout << value << "  ";
}

template <typename T, typename Function>
void	Iter(T* tab, size_t size, Function func) {
	for (size_t i = 0; i < size; i++) {
		func(tab[i]);
	}
}

#endif  // _C07_EX01_ITER_HPP_
