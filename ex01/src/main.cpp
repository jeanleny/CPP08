#include <Span.hpp>

int main(void)
{
	std::cout << "\n--DEFAULT constructor test--\n" << std::endl;
	Span obj(2);
	try 
	{
		obj.addNumber(0);
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
	
	Span obj_range(3);
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	try
	{
		obj_range.addRange(vec);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	obj_range.displayArray();
}
