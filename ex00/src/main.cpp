#include <easyfind.hpp>
#include <vector>

int main(void)
{
	std::vector<int> array;
	for (int i = 0; i < 123 ; i++)
		array.push_back(i);
	try
	{
		easyfind(array, 23);
		easyfind(array, 0);
		easyfind(array, 99);
		easyfind(array, 99);
		easyfind(array, 2);
		easyfind(array, -1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (1);
}
