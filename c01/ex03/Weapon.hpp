/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:40:16 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/21 05:59:38 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C01_EX03_WEAPON_HPP_
#define C01_EX03_WEAPON_HPP_

#include <iostream>

class Weapon {
 private:
	std::string _string;
 public:
	explicit			Weapon(std::string string);
						~Weapon();
	const std::string	&getType() const;
	void				setType(std::string string);
};

#endif  // C01_EX03_WEAPON_HPP_
