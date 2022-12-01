#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main (int argc, char * argv[]) {
    setlocale(LC_ALL, "Ukrainian"); //ну і нашо ахахаха?

    int count = 0;

    pid_t pid;
    pid = fork();

    // time_t now = time(NULL);
    // printf ("%ld", now);

    int sec = 2;
    time_t start, end;
    start = time(NULL);
    do {
        end = time(NULL);

        if (pid == 0) {
            count += 1;
            printf("Child has count = %d\n", count);
        }

        else if (pid > 0) {
            count += 1;
            printf("Parent has count = %d\n", count);
        }
    }
    while ((end - start) < sec);

    printf ("\n-------------------------\n");

    if (pid > 0) { printf ("Parent overal count: %d\n", count); }
    else if (pid == 0) { printf ("Child overal count: %d\n", count); }

    printf ("-------------------------\n");

    return 0;
}
