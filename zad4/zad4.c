// zad4.c Bartlomiej Bajon
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if(n<0)
		printf("Nie mozna skonstruowac trojkata o ujemnej ilosci wierszy\n");
	for(int i=0;i<n;i++) {
		for(int j=0;j<n-i;j++) 
			printf(" ");
		for(int j=0;j<i*2+1;j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
