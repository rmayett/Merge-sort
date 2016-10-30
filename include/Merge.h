#include <iostream>
#include <array>
#include <fstream>

class Merge
{
public:
	int tam;
	int i=0,j=0,k=0;	
	std::array<int,10> arr;
	std::array<int,10> der;
	std::array<int,10> izq;	
	Merge();
	std::array<int,10> MergeReg(std::array<int,10> arr);
	//~Merge();
};