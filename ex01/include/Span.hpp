#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class	Span
{
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
		void			addNumber(unsigned int value);
		void			addRange(std::vector<unsigned int> range);
		void			displayArray();
		int				shortestSpan();
		int				longestSpan();
		std::vector<unsigned int> array;
		
	private :
		unsigned int _N;
};

#endif
