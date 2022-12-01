#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char ** argv) { 
	setlocale(LC_ALL, "Ukrainian");
	
	if (argc < 3){
		printf ("Отримано недостатньо аргументiв.\nВведiть запит в форматi <назвазмiнної> <значення> та спробуйте ще раз.");
		return 0;
	}
	
	if (putenv("argv[1]=argv[2]") != 0) {
		fprintf (stderr, "Помилка запису значення для змiнної '%s'\n", argv[1]);
	    return 0;
	}
	
	printf ("Операцiя успiшна!\n\n%s = %s\n", argv[1], getenv (argv[1])); 
	return 0;
}
