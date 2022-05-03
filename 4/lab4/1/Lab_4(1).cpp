#include <iostream>
#include<windows.h>
#include<string.h>
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	SetConsoleOutputCP(1251);
	int i;
	srand(time(NULL));
	unsigned char c;
	printf("Строка S1, включающая 300 символов: ");
	printf("%\n");
	for (i = 0;i <= 300; i++){
		c = (rand() % ('z' - 'a' + 1)) + 'a';
		printf("%c", c );
	}
		printf("%\n");
		printf("%\n");

	unsigned char n;
	int j;
	printf("Строка S2, включающая 250 символов: ");
	printf("%\n");
	for (j = 0;j <= 250; j++) {
		n = (rand() % ('z' - 'a' + 1)) + 'a',
		printf("%c", n);
	}
	return 0;
}