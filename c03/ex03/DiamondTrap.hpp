/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 04:01:17 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/28 22:44:17 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C03_EX03_DIAMONDTRAP_HPP_
#define C03_EX03_DIAMONDTRAP_HPP_

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap {
 public:
	DiamondTrap(void);
	explicit DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &other);
	~DiamondTrap(void);

	DiamondTrap	&operator=(const DiamondTrap &other);

	void		whoAmI(void);
	void		printStatus(void);
 private:
	std::string	_name;
};


#endif  // C03_EX03_DIAMONDTRAP_HPP_
