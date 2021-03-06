#include "stdafx.h"
#include <iostream>
#include "Combi.h"
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	char Set[] = { 'A', 'B', 'C', 'D', 'E' };

	std::cout << std::endl << " --- Генератор сочетаний ---";
	std::cout << std::endl << "Исходное множество: ";
	std::cout << "{ ";
	for (int i = 0; i < sizeof(Set); i++)
	{
		std::cout << Set[i] << ((i< sizeof(Set) - 1) ? ", " : " ");
	}
	std::cout << "}";

	std::cout << std::endl << "Генерация сочетаний ";
	combiC::xcombination xc(sizeof(Set), 3);
	std::cout << "из " << xc.n << " по " << xc.m;
	int  n = xc.getfirst();

	while (n >= 0)
	{

		std::cout << std::endl << xc.nc << ": { ";
		for (int i = 0; i < n; i++)
		{
			std::cout << Set[xc.ntx(i)] << ((i< n - 1) ? ", " : " ");
		}
		std::cout << "}";
		n = xc.getnext();
	};

	std::cout << std::endl << "всего: " << xc.count() << std::endl;
	system("pause");
	return 0;
}
