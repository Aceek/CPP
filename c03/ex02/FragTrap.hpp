/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 23:00:16 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/20 02:25:52 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C03_EX02_FRAGTRAP_HPP_
#define C03_EX02_FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 private:
 public:
	FragTrap(void);
	explicit FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	~FragTrap(void);

	FragTrap &operator=(const FragTrap &other);
	void highFivesGuys(void);
};

#endif  // C03_EX02_FRAGTRAP_HPP_
