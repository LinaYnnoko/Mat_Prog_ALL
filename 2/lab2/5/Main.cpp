// Main 
#include <iostream>
#include <cstdlib>
#include <ctime> // содержит time()
#include <iostream>
#include "Combi1.h"
#include <tchar.h>
#include "Knapsack.h"
#define NN 4
int _tmain(int argc, _TCHAR* argv[])
{
    setlocale(LC_ALL, "rus");
    int V = 300,   // вместимость рюкзака              
        //v[NN] = { 25, 30, 60, 20 };     // размер предмета каждого типа  
        //c[NN] = { 25, 10, 20, 30 };     // стоимость предмета каждого типа 
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

    short m[NN];   // количество предметов каждого типа  {0,1}   
    int maxcc = knapsack_s(
        V,   // [in]  вместимость рюкзака 
        NN,  // [in]  количество типов предметов 
        v,   // [in]  размер предмета каждого типа  
        c,   // [in]  стоимость предмета каждого типа     
        m    // [out] количество предметов каждого типа  
    );
    std::cout << std::endl << "-------- Задача о рюкзаке ---------";
    std::cout << std::endl << "- количество предметов : " << NN;
    std::cout << std::endl << "- вместимость рюкзака  : " << V;
    std::cout << std::endl << "- размеры предметов    : ";
    for (int i = 0; i < NN; i++) std::cout << v[i] << " ";
    std::cout << std::endl << "- стоимости предмета   : ";
    for (int j = 0; j < NN; j++) std::cout << c[j] << " ";
    std::cout << std::endl << "- стоимости предметов  : ";
    for (int i = 0; i < NN; i++) std::cout << v[i] * c[i] << " ";
    std::cout << std::endl << "- оптимальная стоимость рюкзака: " << maxcc;
    std::cout << std::endl << "- вес рюкзака: ";
    int s = 0; for (int i = 0; i < NN; i++) s += m[i] * v[i];
    std::cout << s;
    std::cout << std::endl << "- выбранные предметы: ";
    for (int i = 0; i < NN; i++) std::cout << " " << m[i];
    std::cout << std::endl << std::endl;
    system("pause");
    return 0;
}