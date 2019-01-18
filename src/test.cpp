#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

int main(int argc, char *argv[])
{
	std::vector<int> vTest{1,2,3,4,5,6,7,8,9};
	std::sort(std::begin(vTest),std::end(vTest),std::greater<int>());
	std::copy(std::begin(vTest),std::end(vTest),std::ostream_iterator<int>(std::cout,"\t"));
	std::cout<<std::endl;
	return 0;
}
