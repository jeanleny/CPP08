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
int	easyfind(T src, int to_find)
{
	typename T::iterator it;
	it = std::find(src.begin(), src.end(), to_find);
	if (it != src.end())
		std::cout << to_find << " has been found" << std::endl;
	else
		throw NoOccurenceFound();
	return (0);
}

#include <easyfind.tpp>

#endif
