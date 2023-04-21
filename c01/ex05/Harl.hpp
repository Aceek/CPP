/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:15:22 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/21 06:00:37 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C01_EX05_HARL_HPP_
#define C01_EX05_HARL_HPP_

#include <iostream>
#include <limits>

class Harl {
 private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

 public:
	Harl(void);
	~Harl(void);
	void	complain(std::string level);
};

#endif  // C01_EX05_HARL_HPP_
