/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:21:31 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/08 18:55:40 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

# define MAX_CONTACT 8

class PhoneBook
{
private:
	Contact _contacts[MAX_CONTACT];
	int		_getInput(void) const;
public:
	PhoneBook();
	~PhoneBook();
	void	addContact(void);
	void	printContacts(void) const;
	void	search(void) const;
	void	starting(void) const;
};

#endif