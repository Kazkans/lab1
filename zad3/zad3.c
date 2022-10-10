// zad3.c Bartlomiej Bajon
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for(;n>0;n--) {
		for(int i=0;i<5;i++) {
			printf("*");
		}
		printf("\n");
	}

	return 9;
}
