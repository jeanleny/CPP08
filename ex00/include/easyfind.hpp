#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class NoOccurenceFound : public std::exception
{
	public :
		const char * what() const throw();
};

template <typename T>
int	easyfind(T src, int to_find);

#include <easyfind.tpp>

#endif
