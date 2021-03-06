#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include "print.hpp"

int main(int argc, char *argv[])
{
	if(argc!=1)
	{
		std::cout<<"	\e[39;38;5;2merror! no parameter\e[39;38;0;2m\n";
		return 0;
	}
	std::vector<int> vTest{1,2,3,4,5,6,7,8,9};
	std::sort(std::begin(vTest),std::end(vTest),std::greater<int>());

	printVec(vTest);
	printReverseVec(vTest);
	std::cout<<std::endl;
	return 0;
}
