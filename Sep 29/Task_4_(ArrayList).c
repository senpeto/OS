#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Ukrainian");
	int size = 1;
	int choice;
	int index = 0;
	int element = 0;
	int tempshit = 0;
	int i = 0;
	int *newarray = (int *)malloc((size+1) * sizeof(int));;
	int *array = (int *)malloc((size+1) * sizeof(int));;
	printf ("Програма-аналог ArrayList з мови Java\n\n");
	printf ("Введiть перший елемент масиву: ");
	scanf ("%d", &array[0]);

	while (true){
	for (i = 0; i < size; i++) {
	newarray[i] = array[i];	
	}
	printf ("\nВиберiть дiю: \n- 1 -  додати елемент в кiнець масиву\n- 2 -  додати елемент в середину масиву по вказаному iндексу\n- 3 -  кiлькiсть елементiв в масивi\n- 4 -  видалення елементу за iндексом\n- 5 -  замiна iснуючого елементу\n- 6 -  значення елементу по iндексу\n- 0 -  вихiд\n");
	scanf ("%d", &choice);
	switch (choice) {
		case 1:
			printf ("Введiть бажаний елемент: ");
			scanf ("%d", &array[size]);
			
			size +=1;

			printf ("\n------------------------------\n");
			printf ("Масив:\n");
			for (i = 0; i < size; i++) {
			printf ("%d ", array[i]);
			}
			printf ("\n------------------------------\n");
			break;
			
		case 2:
			printf ("Введiть бажаний елемент: ");
			scanf ("%d", &element);
			printf ("Введiть iндекс елементу: ");
			scanf ("%d", &index);
			
			size +=1;

			for (i = 0; i < size; i++) {
				if (i>=index) {
					array[i+1] = newarray [i];
				}
			}
			
			array [index] = element;
			printf ("\n------------------------------\n");
			printf ("Масив:\n");
			for (i = 0; i < size; i++) {
			printf ("%d ", array[i]);
			}
			printf ("\n------------------------------\n");
			break;
			
		case 3: 
			printf ("\nКiлькiсть елементiв масиву: %d\n", size);
			break;
			
		case 4:
			printf ("Введiть iндекс видаляємого елементу: ");
			scanf ("%d", &index);
			for (i = 0; i < size; i++) {
				if (i>=index) {
					array[i] = newarray [i+1];
				}
			}
			size -=1;
			
			printf ("\n------------------------------\n");
			printf ("Масив:\n");
			for (i = 0; i < size; i++) {
			printf ("%d ", array[i]);
			}
			printf ("\n------------------------------\n");
			break;
			
		case 5:
			printf ("Введiть iндекс елементу, що потрiбно змiнити: ");
			scanf ("%d", &index);
			printf ("Введiть бажаний елемент: ");
			scanf ("%d", &element);
			
			array [index] = element;
			
			printf ("\n------------------------------\n");
			printf ("Масив:\n");
			for (i = 0; i < size; i++) {
			printf ("%d ", array[i]);
			}
			printf ("\n------------------------------\n");
			break;
			
		case 6: 
			printf ("Введiть iндекс елементу: ");
			scanf ("%d", &index);
			printf ("\nПiд iндексом %d знаходиться елемент зi значенням %d\n", index, array[index]);
			break;
			
		case 0:
			free (newarray);
			free (array);
			printf ("\nМатимеш гарний день. \nЦе погроза.");
			return 0;
		
	}
	
	}
	return 0;
}
