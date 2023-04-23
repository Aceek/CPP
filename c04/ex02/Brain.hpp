/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 22:24:15 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/22 22:36:03 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include "Animal.hpp"

class Brain {
 public:
	Brain(void);
	Brain(const Brain &other);
	~Brain();

	Brain	&operator=(const Brain &other);
 
 private:
	std::string ideas[100];
};

#endif  // BRAIN_HPP_
