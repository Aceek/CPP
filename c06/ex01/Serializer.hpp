/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 03:17:46 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/13 05:45:15 by ilinhard         ###   ########.fr       */
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
	static uintptr_t	serialize(Data *ptr);
	static Data*		deserialize(uintptr_t raw);
 private:
	Serializer();
	~Serializer();
	Serializer(const Serializer &other);
	Serializer			&operator=(const Serializer &other);
};

#endif  // C06_EX01_SERIALIZER_HPP_