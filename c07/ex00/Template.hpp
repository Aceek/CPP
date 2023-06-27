/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 08:27:17 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/27 09:23:31 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _C07_EX00_TEMPLATE_HPP_
#define _C07_EX00_TEMPLATE_HPP_

#include <iostream>

template <typename T>
T const &max(const T &x, const T &y) {
	return ((x > y) ? x : y);
}

template <typename T>
T const &min(const T &x, const T &y) {
	return ((x < y) ? x : y);
}

template <typename T>
void swap(T& x, T& y) {
	T tmp = x;
	
	x = y;
	y = tmp; 
}

#endif  // _C07_EX00_TEMPLATE_HPP_
