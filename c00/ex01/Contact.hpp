#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>
#include <limits>


# define MAX_CONTACT 8

class Contact
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;
	int			_index;

	std::string _printLen(std::string str) const;
	std::string _getInput(std::string str) const;

public:
	Contact();
	~Contact();
	void	init(int index);
	void	print(int index) const;
	void	display(int index) const;
};


#endif