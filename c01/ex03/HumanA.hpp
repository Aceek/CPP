/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:00:35 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/10 21:24:03 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
 private:
	Weapon				&_weapon;
	std::string			_name;
 public:
			HumanA(std::string name, Weapon &weapon);
			~HumanA();
	void	attack() const;

};

#endif