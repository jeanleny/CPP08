#include <Span.hpp>

int main(void)
{
	std::cout << "\n--DEFAULT constructor test--\n" << std::endl;
	Span obj(2);
	try 
	{
		obj.addNumber(11);
		obj.addNumber(9);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	obj.displayArray();

	std::cout << "\n--COPY constructor test--\n" << std::endl;
	Span obj_cpy(obj);
	obj_cpy.displayArray();


	std::cout << "\n--Overload operator test--\n" << std::endl;
	Span obj_op;
	obj_op = obj_cpy;
	obj_op.displayArray();
	
	Span obj_range(10);
	std::vector<unsigned int> vec;
	vec.push_back(7);
	vec.push_back(7);
	vec.push_back(18);
	vec.push_back(28);
	vec.push_back(40);
	try
	{
		obj_range.addRange(vec);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	obj_range.displayArray();
	std::cout << "--SHORT SPAN test--" << std::endl;
	std::cout << "obj_range array" << std::endl;
	obj_range.displayArray();
	std::cout << "shortest span : " << obj_range.shortestSpan() << std::endl;

	Span imp_span(1);
	imp_span.addNumber(7);
	try
	{
		imp_span.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	Span lspan(3);
	lspan.addNumber(6);
	lspan.addNumber(5);
	lspan.addNumber(90);
	std::cout << "longest span " << lspan.longestSpan() << std::endl;
	Span imp_lspan(1);
	try
	{
		imp_lspan.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	Span impo_lspan(0);
	try
	{
		impo_lspan.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
