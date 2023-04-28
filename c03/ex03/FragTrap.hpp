/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 23:00:16 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/28 22:45:02 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C03_EX03_FRAGTRAP_HPP_
#define C03_EX03_FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
 private:
 public:
	FragTrap(void);
	explicit FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	~FragTrap(void);

	FragTrap &operator=(const FragTrap &other);

	void	highFivesGuys(void);
	void	printStatus();
};

#endif  // C03_EX03_FRAGTRAP_HPP_
