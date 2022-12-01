#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>
#include <unistd.h>
#include <locale.h>


int main (int argc, char * argv[]) {
	setlocale(LC_ALL, "Ukrainian");
	if (argc == 1){
		printf ("Отримано 0 аргументiв, -h для допомоги");
		return 0;
	}
	char* newname;
	char *opts = "hco:";  
	int opt; 
    while( (opt = getopt(argc, argv, opts)) != -1) { 
        switch (opt){ 
            case 'h':
            	printf ("Меню допомоги:\n");
            	printf (" -h - меню допомоги (ви тут)\n -o - встановлення нестандартного iменi вихiдного файла\n -c - спецiальний режим роботи\n");
            	break;
            	
            case 'o':
				newname=optarg; 
                printf("Змiна iменi вихiдного файлу на %s\n", newname); 
                break;
                
            case 'c': 
                printf("Вибраний спецiальний режим роботи!\n"); 
                break;
            
            default: 
               printf("Команду не розпiзнано, -h для допомоги");
               break;
		}
    }
	return 0;
}
