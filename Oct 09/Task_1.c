#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main (int argc, char * argv[]) {
	setlocale(LC_ALL, "Ukrainian");
	
	if (argc < 4){
		printf ("Недостатньо аргументiв для початку роботи (потрiбно - 3, отримано - %d)\nБудь-ласка, введiть значення параметрiв a, b та c!", argc-1);
		return 0;
	}
	
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);
	
	float x1 = 0;
	float x2 = 0;
	
	printf ("Програма для вирiшення рiвняння a*x^2 + b*x + c = 0\n\n");
	printf ("Отриманi аргументи:\n - a=%d\n - b=%d\n - c=%d\n\n", a, b, c);
	
	x1 = ((-b + sqrt(pow(b, 2)-4*a*c))/(2*a));
	x2 = - ((b + sqrt(pow(b, 2)-4*a*c))/(2*a));
	
	printf ("Результат роботи програми: \n - x1 = %f\n - x2 = %f", x1, x2);
	
	return 0;
}
