/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:37:43 by ilinhard          #+#    #+#             */
/*   Updated: 2023/06/27 13:23:02 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _C07_EX00_ARRAY_TPP_
#define _C07_EX00_ARRAY_TPP_

#include <iostream>

template <typename T>
class Array {
 private :
	unsigned int	_size;
	T*				_tab;

 public :
	Array() : _size(0), _tab(new T[0]) {};
	Array(unsigned int n) : _size(n), _tab(new T[n]) {};
	~Array() {
		delete [] _tab;
	}

	Array(const Array &other) : _size(other._size), _tab(new T[other._size]) {
		for (unsigned int i = 0; i < _size; i++) {
			_tab[i] = other._tab[i];
		}
	}
	
	Array &operator=(const Array &other) {
		if (this != &other) {
			delete [] this->_tab;
			this->_size = other._size;
			_tab = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++) {
				this->_tab[i] = other._tab[i];
			}
		}
		return (*this);
	}

	T &operator[](unsigned int i) const {
		if (i >= this->_size)
			throw OutOfBoundsException();
		return (_tab[i]);
	}

	unsigned int size() const {
		return (this->_size);
	}

	class OutOfBoundsException : public std::exception {
		virtual const char* what () const throw() {
			return ("Index out of bounds");
		}
	};
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& array) {
	for (unsigned int i = 0; i < array.size() ; i++) {
		os << array[i] << " ";
	}
	
	return (os);
}

#endif  // _C07_EX00_ARRAY_TPP_
