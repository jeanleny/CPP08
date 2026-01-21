#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class	Span
{
	class AlreadyStoredException : public std::exception
	{
		const char * what() const throw();
	};
	class ImpossibleSpanException : public std::exception
	{
		const char * what() const throw();	
	};
	class LimitReachedException : public std::exception
	{
		const char * what() const throw();
	};
	public :
		Span();
		Span(unsigned int N);
		Span(const Span& obj);
		Span& operator=(const Span& rhs);
		~Span();
		unsigned int	getN();
		void			addNumber(int value);
		void			addRange(std::vector<int> range);
		void			displayArray();
		int				shortestSpan();
		int				longestSpan();
		std::vector<int> array;
		
	private :
		unsigned int _N;
};

#endif
