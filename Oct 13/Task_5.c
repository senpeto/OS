#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char ** argv) {
	setlocale(LC_ALL, "Ukrainian");
	
	if (argc == 1) {
		printf ("Отримано 0 аргументiв.\nВведiть назву змiнної i спробуйте ще раз.");
		return 0;
	}
	
	char * var = getenv (argv[1]);
	
	if (var == NULL) {
		printf ("Змiнна '%s' не знайдена..\n", argv[1]);
		return 0;
	}
	
	printf ("Результат пошуку:\n'%s = %s'\n", argv[1], var);
	return 0;
}
