/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 03:17:46 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/27 09:07:06 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C06_EX01_SERIALIZER_HPP_
#define C06_EX01_SERIALIZER_HPP_

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

#endif  // C06_EX01_SERIALIZER_HPP_