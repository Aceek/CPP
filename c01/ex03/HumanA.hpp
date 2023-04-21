/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:00:35 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/21 05:55:57 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C01_EX03_HUMANA_HPP_
#define C01_EX03_HUMANA_HPP_

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

#endif  // C01_EX03_HUMANA_HPP_
