#include <iostream>
#include <ctime>
using namespace std;


int main() 
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	cout << "Строка S1 из 300 символов: \n";
	char c;
	for (int i = 0; i < 299; i++) {
		c = (rand() % ('a' - 'z' + 1)) + 'a';
		cout << c;

	}

	cout << "\n";
	cout << "\n";

	cout << "Строка S2 из 250 символов:  \n";
	char n;
	for (int j = 0; j < 249; j++) {
		n = (rand() % ('a' - 'z' + 1)) + 'a';
		cout << n;

	}
}
