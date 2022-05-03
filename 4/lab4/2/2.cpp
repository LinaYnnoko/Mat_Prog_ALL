// - main  
#include <iostream>
#include "Levenshtein.h"
#include <tchar.h>
#include <algorithm>
#include <iostream>
#include <ctime>
#include <iomanip>
#include "Levenshtein.h"
#define N 200
#define P 175

int _tmain(int argc, _TCHAR* argv[])
{
    setlocale(LC_ALL, "rus");
    clock_t t1 = 0, t2 = 0, t3, t4;
    char x[N], y[P];

    for (int i = 0; i < N; i++)
        x[i] = ('a' + rand() % ('z' - 'a'));

    for (int i = 0; i < P; i++)
        y[i] = ('a' + rand() % ('z' - 'a'));

    std::cout << "S1: ";
    for (int i = 0; i < N; i++)
    {
        std::cout << x[i];
    }
    std::cout << "\n";
    std::cout << "S2: ";

    for (int i = 0; i < P; i++) 
    {
        std::cout <<  y[i];
    }

    int  lx = sizeof(x) - 1, ly = sizeof(y) - 1;
    std::cout << std::endl;
    std::cout << std::endl << "-- расстояние Левенштейна --" << std::endl;
    std::cout << std::endl << "--- длина --- рекурсия --- дин.програм. ---"
        << std::endl;

    int d = 25;

    while(d > 0)
    {
        lx = N / d;
        ly = P / d;

        char* str1 = new char[lx];
        char* str2 = new char[ly];

        for (int i = 0; i < lx; i++)
        {
            str1[i] = x[i];
            std::cout << str1[i];
        }
        std::cout << std::endl;

        for (int i = 0; i < ly; i++)
        {
            str2[i] = y[i];
            std::cout << str2[i];
        }
        std::cout << std::endl;

        t1 = clock();levenshtein_r(lx, str1, ly, str2); t2 = clock();
        t3 = clock();levenshtein(lx, str1, ly, str2); t4 = clock();

        std::cout << std::right << 1 << "/" << std::setw(2) << d
            << "        " << std::left << std::setw(10) << (t2 - t1)
            << "   " << std::setw(10) << (t4 - t3) << std::endl;
        
        if (d == 5)
        {
            d -= 3;
        }

        else if (d == 2)
        {
            d -= 1;
        }

        else if (d == 15)
        {
            break;
        }

        else if (d < 15)
        {
            continue;
        }


        else
        {
            d -= 5;
        }

        delete[] str1;
        delete[] str2;
    }
    system("pause");
    return 0;
}

