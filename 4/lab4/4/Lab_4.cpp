//#include "stdafx.h"
#include <iostream>
#include "Levenshtein.h"
#include <tchar.h>
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	char X[] = "Сом", Y[] = "Домик";
	std::cout << std::endl << "-- дистанция Левенштейна (рекурсия)";
	std::cout << std::endl << X << " --> " << Y << " = "
		<< levenshtein_r(sizeof(X) - 1, X, sizeof(Y) - 1, Y) << std::endl;
	system("pause");
	return 0;
}
