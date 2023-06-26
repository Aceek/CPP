/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 03:17:46 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/26 04:02:32 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>


struct Data
{
	int			nb;
	std::string	raw;
};


class Serializer {
 public:
	Serializer();
	~Serializer();
	Serializer(const Serializer &other);

	Serializer			&operator=(const Serializer &other);

	static uintptr_t	serialize(Data *ptr);
	static Data*		deserialize(uintptr_t raw);
};
