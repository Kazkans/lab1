// zad2.c Bartlomiej Bajon
#include <stdio.h>
#include <math.h>

int main() {
	double a,b,c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double delta=b*b-4*a*c;
	if (delta>0) {
		double r1 = (-b+sqrt(delta))/(2*a);
		double r2 = (-b-sqrt(delta))/(2*a);
		printf("Rozwiazania: %lf %lf\n", r1, r2);
	} else if(delta == 0) {
		double r1 = (-b)/(2*a);
		printf("Rozwiazanie: %lf\n", r1);
	} else {
		printf("brak rozwiazan\n");
	}

	return 0;
}
