#include <iostream>
#include <algorithm>
#include "print.hpp"
/********************************************************
 * void printVec(const std::vector<int> v;)
 * 
 ********************************************************/
void printVec(const std::vector<int> v)
{
} /* void printVec(const std::vector<int> v;) */

/********************************************************
 * void printReverseVec(const std::vector<int> v;)
 * 
 ********************************************************/
void printReverseVec(const std::vector<int> v)
{
	for(auto& x:v)
		std::cout<<x<<"\t";
	std::cout<<"\n";
} /* void printReverseVec(const std::vector<int> v;) */

