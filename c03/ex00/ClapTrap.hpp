/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:02:29 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/28 21:58:32 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C03_EX00_CLAPTRAP_HPP_
#define C03_EX00_CLAPTRAP_HPP_

#include <iostream>

class ClapTrap {
 private:
	std::string		_name;
	int				_hitPoint;
	int				_energyPoint;
	unsigned int	_attackDamage;

 public:
	ClapTrap(void);
	ClapTrap(const ClapTrap &other);
	explicit ClapTrap(std::string name);
	~ClapTrap(void);

	ClapTrap	&operator=(const ClapTrap &other);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	printStatus();
};

#endif  // C03_EX00_CLAPTRAP_HPP_
