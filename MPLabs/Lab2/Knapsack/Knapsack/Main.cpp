#include "stdafx.h"
#include <iostream>
#include "Knapsack.h"
#include "Rand.h"

#define N 18
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	auxil::start();
	int V = 300;               // ����������� �������              
	int v[N];     // ������ �������� ������� ����  
	int	c[N];     // ��������� �������� ������� ���� 
	short m[N];                // ���������� ��������� ������� ����  {0,1}   
	clock_t  t1 = 0, t2 = 0;

	t1 = clock();
	for (int i = 0; i < N; i++)
	{
		v[i] = auxil::iget(10, 300);
	}
	for (int i = 0; i < N; i++)
	{
		c[i] = auxil::iget(5, 55);
	}

	int maxcc = knapsack_s(

		V,   // [in]  ����������� ������� 
		N,  // [in]  ���������� ����� ��������� 
		v,   // [in]  ������ �������� ������� ����  
		c,   // [in]  ��������� �������� ������� ����     
		m    // [out] ���������� ��������� ������� ����  
	);
	t2 = clock();

	std::cout << std::endl << "-------- ������ � ������� --------- ";
	std::cout << std::endl << "- ���������� ��������� : " << N;
	std::cout << std::endl << "- ����������� �������  : " << V;
	std::cout << std::endl << "- ������ + ��������� ���������  : "<<std::endl;
	for (int i = 0; i < N; i++)
	{
		std::cout<< i+1 <<". "<< v[i] << " - " <<c[i] << std::endl;
	}
	std::cout << std::endl << "- ����������� ��������� �������: " << maxcc;
	std::cout << std::endl << "- ��� �������: ";
	int s = 0; for (int i = 0; i < N; i++)
	{
		s += m[i] * v[i];
	}
	std::cout << s;
	std::cout << std::endl << "- ������� ��������: ";
	for (int i = 0; i < N; i++)
	{
		std::cout << " " << m[i];
	}
	std::cout << std::endl << "����������������� (�.�):   " << (t2 - t1);
	std::cout << std::endl << "                  (���):   "
		<< ((double)(t2 - t1)) / ((double)CLOCKS_PER_SEC);
	std::cout << std::endl << std::endl;

	system("pause");
	return 0;
}
