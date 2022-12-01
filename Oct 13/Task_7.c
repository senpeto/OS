#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>

int main (int argc, char **argv) { 
	setlocale(LC_ALL, "Ukrainian");
	
	if(argc>2) {
		printf ("Отримано забагато аргументiв.\nВведiть запит в форматi <назвазмiнної> та спробуйте ще раз.");
		return 0;
	}
	
	else if (argc<2){
		clearenv();
		printf ("Середовище видалено успiшно!");
	}
	
	else {
		unsetenv(argv[1]);
		printf ("Змiнна видалена успiшно!");
	}
	
	if (unsetenv(argv[1])==-1){
		fprintf(stderr, "Змiнна не знайдена..");
	}
	
	return 0;
}
