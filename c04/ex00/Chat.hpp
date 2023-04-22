/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chat.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 04:23:28 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/22 05:11:12 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAT_HPP_
#define CHAT_HPP_

#include "Animal.hpp"

class Chat : public Animal {
 public:
	Chat(void);
	Chat(const Chat &chat);
	~Chat(void);

	Chat			&operator=(const Chat &chat);
	virtual void	makeSound() const;

 private:
};

#endif  // CHAT_HPP_
