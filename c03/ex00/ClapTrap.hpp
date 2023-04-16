/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:02:29 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/16 16:14:31 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

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
};

#endif
