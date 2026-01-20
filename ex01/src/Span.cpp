#include <Span.hpp>

const char *Span::LimitReachedException::what() const throw()
{
	return ("Array cant contains more values");
}

const char *Span::AlreadyStoredException::what() const throw()
{
	return ("Value is already stored in the array");
}

const char *Span::ImpossibleSpanException::what() const throw()
{
	return("Span cannot be shown");
}

Span::Span() : _N(0)
{
	std::cout << "Default constructor called" << std::endl;	
}

Span::Span(unsigned int N) : _N(N)
{
	std::cout << "Argument constructor called" << std::endl;
}

Span::Span(Span const &obj) : _N(obj._N)
{
	array = std::vector<int>(obj.array.begin(), obj.array.end());
	std::cout << "Copy constructor called" << std::endl;
}

Span& Span::operator=(Span const &rhs)
{
	std::cout << "Overload operator called" << std::endl;
	if (this != &rhs)
	{
		this->_N = rhs._N;
		array = std::vector<int>(rhs.array.begin(), rhs.array.end());
	}
	return (*this);
}

Span::~Span()
{
	std::cout << "Destructor called" << std::endl;
}	

unsigned int Span::getN()
{
	return (_N);
}

void	Span::addRange(std::vector<int> range)
{
	if (range.size() + array.size() > getN())
		throw LimitReachedException();
	array.insert(array.begin(), range.begin(), range.end());
}

void	Span::addNumber(int value)
{
	std::vector<int>::iterator it;
	
	if (array.size() >= getN())
		throw LimitReachedException();
	it = find(array.begin(), array.end(), value);
	if (it == array.end())
		array.push_back(value);
	else
		throw AlreadyStoredException();
}

void	Span::displayArray()
{
	std::vector<int>::iterator it;
	for (it = array.begin(); it != array.end(); *it++)
		std::cout << *it << std::endl;
}
