/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:55:39 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/23 23:32:41 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARCTER_HPP_
#define CHARCTER_HPP_

#include "AMateria.hpp"
#include "ICharacter.hpp"
#define INVENTORY_SIZE 4

class Character : public ICharacter {
 public:
	Character(void);
	Character(std::string name);
	~Character(void);
	Character(const Character &other);

	virtual Character &operator=(const Character &other);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
 private:
	std::string	_name;
	AMateria	*inventory[INVENTORY_SIZE];

};

#endif  // CHARCTER_HPP_
