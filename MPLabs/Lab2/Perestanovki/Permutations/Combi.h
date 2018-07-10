#pragma once 
namespace combiP
{
	struct  permutation    // ���������   ������������     
	{
		const static bool L = true;  // ����� ������� 
		const static bool R = false; // ������ �������   

		short  n,              // ���������� ��������� ��������� ��������� 
			*sset;           // ������ �������� ������� ������������
		bool  *dart;           // ������  ������� (�����-L � ������-R) 
		permutation(short n = 1); // ����������� (���������� ��������� ��������� ���������) 

		void reset();                // �������� ���������, ������ ������� 

		int getfirst();          // ������������ ������ ������ ��������    
		int getnext();           // ������������ ��������� ������ ��������  

		short ntx(short i);          // �������� i-� ������� ������ �������� 
		unsigned int np;         // ����� ������������ 0,... count()-1 

		unsigned int count() const;  // ��������� ����� ���. ������������    
	};
};

