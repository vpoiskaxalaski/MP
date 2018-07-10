#include "stdafx.h"
#include "Rand.h"

//RAND_MAX = 32 767
namespace auxil
{
	void start()
	{
		srand((unsigned)time(NULL));
	}

	double dget(double rmin, double rmax)
	{
		//���������� ��������������� ����� �� 0 �� RAND_MAX(32 767)
		return (double)rand() / RAND_MAX * (rmax - rmin) + rmin;
	}

	int iget(int rmin, int rmax)
	{
		return (int)dget((double)rmin, (double)rmax);
	}
}