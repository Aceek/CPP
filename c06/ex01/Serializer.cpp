/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 03:29:02 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/26 03:54:09 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Serializer.hpp>

Serializer::Serializer() {};
Serializer::~Serializer() {};

Serializer::Serializer(const Serializer &other) {
	*this = other;
}

Serializer &Serializer::operator=(const Serializer &other) {
	(void)other;
	return (*this);
}

uintptr_t Serializer::serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}