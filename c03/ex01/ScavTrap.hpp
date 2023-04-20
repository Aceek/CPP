/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 23:00:16 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/20 02:32:16 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C03_EX01_SCAVTRAP_HPP_
#define C03_EX01_SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 private:
 public:
	ScavTrap(void);
	explicit ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
	~ScavTrap(void);

	ScavTrap &operator=(const ScavTrap &other);

	void	guardGate(void);
	void	attack(const std::string &target);
};

#endif  // C03_EX01_SCAVTRAP_HPP_
