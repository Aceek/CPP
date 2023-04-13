/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:55:33 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/13 17:01:49 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
 private:
	int	_value;
	const int	_fractionalBits;
 public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed	&operator=(const Fixed &other);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
