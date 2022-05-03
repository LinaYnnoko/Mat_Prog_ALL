// 3.cpp: ���������� ����� ����� ��� ����������� ����������.
//


#include "stdafx.h"
#include <iostream>
#include <iomanip> 
#include "Salesman.h"
#define N 5

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int n = 6;
	int d[N][N] = { //0   1    2    3     4        
				   { INF,  2 * n,  21 + n,  INF, n},    //  0
				   { n,   INF,   15 + n,  68 - n,  84 - n},    //  1
				   { 2 + n,  3 * n,   INF,  86,   49 + n},    //  2 
				   { 17 + n,  58 - n,  4 * n,   INF,   3 * n},    //  3
				   { 93 - n,  66 + n,  52,  13 + n,   INF} };   //  4 

	int r[N];   /// ��������� 
	int s = salesman(
		N,          /// [in]  ���-�� ������� 
		(int*)d,    /// [in]  ������ [n*n] ���������� 
		r           /// [out] ������ [n] ������� 0 x x x x  

	);
	cout << "\n-- ������ ������������ -- ";
	cout << "\n-- ����������  �������: " << N;
	cout << "\n-- ������� ���������� : ";

	for (int i = 0; i < N; i++)
	{
		cout << "\n";
		for (int j = 0; j < N; j++)

			if (d[i][j] != INF) cout << setw(3) << d[i][j] << " ";

			else cout << setw(3) << "INF" << " ";
	}

	cout << "\n-- ����������� �������: ";
	for (int i = 0; i < N; i++)
		cout << r[i] + 1 << "-->";

	cout << 1;
	cout << "\n-- ����� ��������     : " << s << "\n";
	system("pause");
	return 0;

}