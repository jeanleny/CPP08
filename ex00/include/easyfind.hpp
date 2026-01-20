#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class NoOccurenceFound : public std::exception
{
	public :
		const char * what() const throw()
		{
			return ("No occurence has been found");
		}
};

template <typename T>
int	easyfind(T src, int to_find)
{
	typename T::iterator it;
	it = std::find(src.begin(), src.end(), to_find);
	if (it != src.end())
	{
		std::cout << to_find << "has been found" << std::endl;
		return (1);
	}
	throw NoOccurenceFound();
	return (0);
}

#endif
