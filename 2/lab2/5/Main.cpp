// Main 
#include <iostream>
#include <cstdlib>
#include <ctime> // �������� time()
#include <iostream>
#include "Combi1.h"
#include <tchar.h>
#include "Knapsack.h"
#define NN 4
int _tmain(int argc, _TCHAR* argv[])
{
    setlocale(LC_ALL, "rus");
    int V = 300,   // ����������� �������              
        //v[NN] = { 25, 30, 60, 20 };     // ������ �������� ������� ����  
        //c[NN] = { 25, 10, 20, 30 };     // ��������� �������� ������� ���� 
    v[4] = {};
    srand(time(NULL));
    for (int i = 0; i < 4; i++) 
    {
        v[i] = rand() % 300 + 10;
    }

    int c[4] = {};
    srand(time(NULL));
    for (int j = 0; j < 4; j++)
    {
        c[j] = rand() % 55 + 5;
    }

    short m[NN];   // ���������� ��������� ������� ����  {0,1}   
    int maxcc = knapsack_s(
        V,   // [in]  ����������� ������� 
        NN,  // [in]  ���������� ����� ��������� 
        v,   // [in]  ������ �������� ������� ����  
        c,   // [in]  ��������� �������� ������� ����     
        m    // [out] ���������� ��������� ������� ����  
    );
    std::cout << std::endl << "-------- ������ � ������� ---------";
    std::cout << std::endl << "- ���������� ��������� : " << NN;
    std::cout << std::endl << "- ����������� �������  : " << V;
    std::cout << std::endl << "- ������� ���������    : ";
    for (int i = 0; i < NN; i++) std::cout << v[i] << " ";
    std::cout << std::endl << "- ��������� ��������   : ";
    for (int j = 0; j < NN; j++) std::cout << c[j] << " ";
    std::cout << std::endl << "- ��������� ���������  : ";
    for (int i = 0; i < NN; i++) std::cout << v[i] * c[i] << " ";
    std::cout << std::endl << "- ����������� ��������� �������: " << maxcc;
    std::cout << std::endl << "- ��� �������: ";
    int s = 0; for (int i = 0; i < NN; i++) s += m[i] * v[i];
    std::cout << s;
    std::cout << std::endl << "- ��������� ��������: ";
    for (int i = 0; i < NN; i++) std::cout << " " << m[i];
    std::cout << std::endl << std::endl;
    system("pause");
    return 0;
}