#include <MutantStack.hpp>

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	std::cout << "default constructor has been called" << std::endl;
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &obj) : std::stack<T>(obj)
{
	std::cout << "copy constructor called" << std::endl;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack& rhs)
{
	if (this != &rhs)
		std::stack<T>::operator=(rhs);
	return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "Destructor called" << std::endl;
}
