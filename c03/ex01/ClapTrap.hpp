/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:02:29 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/20 02:31:57 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C03_EX01_CLAPTRAP_HPP_
#define C03_EX01_CLAPTRAP_HPP_

#include <iostream>

class ClapTrap {
 protected:
	std::string		_name;
	int				_hitPoint;
	int				_energyPoint;
	unsigned int	_attackDamage;

 public:
	ClapTrap(void);
	ClapTrap(const ClapTrap &other);
	explicit ClapTrap(std::string name);
	ClapTrap(std::string name, int hitPoint, int energyPoint, int AttackDamage);
	~ClapTrap(void);

	ClapTrap	&operator=(const ClapTrap &other);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif  // C03_EX01_CLAPTRAP_HPP_
