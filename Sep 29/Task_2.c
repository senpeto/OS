#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Ukrainian");
	int n;
	int i;
	float avg = 0;
	int count = 0;
	int sum = 0;
	int fnn = 0;
	bool neg;
	//створення масиву, запис чисел, визначення середнього значення
	printf ("Введiть розмiрнiсть масиву: ");
	scanf ("%d", &n);
	int mass [n];
	printf ("Введiть бажанi елементи до масиву: \n");
	for (i = 0; i < n; i++) {
		scanf ("%d", &mass[i]);
		avg += mass[i];
	}
	avg /= n;
	
	//підрахунок кількості елементів, бiльших за середнє значення
	for (i = 0; i<n; i++) {
		if (mass[i] > avg)
		count ++;
	}
	printf ("\nКiлькiсть елементiв, бiльших за середнє значення (%.2f): %d\n", avg, count);
	
	//знаходження суми модулей елементiв масиву, що йдуть пiсля першого вiд'ємного елементу, якщо такі є
	for (i = 0; i<n; i++) {
		if (mass[i] < 0) {
			fnn = mass[i];
			neg = true;
			for (i += 1; i<n; i++) {
				sum += abs(mass[i]);
			}
			break;
		}
	}
	
	//вивід суми модулей, якщо було знайдено від'ємний елемент
	if (neg)
	printf ("\nСума модулей елементiв масиву, що йдуть пiсля першого вiд'ємного елементу (%d): %d", fnn, sum);
	return 0;
}
