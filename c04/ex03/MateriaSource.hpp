/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 00:16:05 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/24 00:40:54 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP_
#define MATERIASOURCE_HPP_

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Character.hpp"

class MateriaSource : public IMateriaSource {
 public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	~MateriaSource();

	MateriaSource	&operator=(const MateriaSource &other);

	virtual void			learnMateria(AMateria *other);
	virtual AMateria		*createMateria(std::string const &type);
 private:
	AMateria	*invetory[INVENTORY_SIZE];

};


#endif  // MATERIASOURCE_HPP_