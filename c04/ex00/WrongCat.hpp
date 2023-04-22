/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 05:36:10 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/22 05:36:56 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCHAT_HPP_
#define WRONGCHAT_HPP_

#include "WrongAnimal.hpp"

class WrongChat : public WrongAnimal {
 public:
	WrongChat(void);
	WrongChat(const WrongChat &chat);
	~WrongChat(void);

	WrongChat			&operator=(const WrongChat &chat);
	virtual void		makeSound() const;

 private:
};

#endif  // CHAT_HPP_
