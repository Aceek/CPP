/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 20:04:00 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/03 21:29:16 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _C08_EX00_EASYFIND_HPP_
#define _C08_EX00_EASYFIND_HPP_

#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
#include <list>
#include <stack>

template <typename T>
typename T::iterator easyfind(T &container, int value) {
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end()) {
		std::cout << "Value not found in container" << std::endl;
		return (container.end());
	}
	std::cout << "Value find in container" << std::endl;
	return (it);
}

#endif  // _C08_EX00_EASYFIND_HPP_
