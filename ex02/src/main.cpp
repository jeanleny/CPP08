#include <MutantStack.hpp>

int main(void)
{
	MutantStack<int> ouite;
	ouite.push(1);
	ouite.push(3);
	ouite.push(2);
	ouite.push(6);
	std::cout << ouite.top()<< std::endl;
	ouite.top() += 8;
	std::cout << ouite.top()<< std::endl;
	ouite.pop();
	std::cout << ouite.top()<< std::endl;

	std::cout << "--COPY CONSTRUCTOR TEST--" << std::endl;
	MutantStack<int> nonke(ouite);
	std::cout << ouite.top() << std::endl;
	
	std::cout << "--ITERATOR TEST--" << std::endl;
	MutantStack<int>::iterator it = ouite.begin();
	while (it < ouite.end())
	{
		std::cout << *it << std::endl;
		*it += 1;
		it++;
	}
	std::cout << "--CONST ITERATOR TEST--" << std::endl;
	MutantStack<int> yank;
	yank.push(3);
	yank.push(4);
	yank.push(5);
	yank.push(6);
	MutantStack<int>::const_iterator ite = yank.begin();
	while (ite < yank.end())
	{
		std::cout << *ite << std::endl;
		ite++;
		//*ite += 1;
	}

	std::cout << "--SUBJECT TEST--" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator itt = mstack.begin();
	MutantStack<int>::iterator itte = mstack.end();
	++itt;
	--itt;
	while (itt != itte)
	{
	std::cout << *itt << std::endl;
	++itt;
	}
	std::stack<int> s(mstack);
	return 0;
}
