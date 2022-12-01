#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char * argv[]) {
    setlocale(LC_ALL, "Ukrainian");

    int count = 0;
    int n = 2;
    pid_t pids [2];
    int i;

    for (i = 0; i < n; i++) {
        if ((pids[i] = fork()) < 0) {
            perror("fork");
            abort();
        }
        else if (pids[i] == 0) {
            printf ("i = %d\n", i);
            printf ("Child\n");
            count += 1;
            printf ("Count = %d\n\n", count);

            printf ("Iдентифiкатор поточного процесу: %d\n", getpid());
            printf ("Iдентифiкатор parental процесу: %d\n", getppid());

                for (i = 0; i < n; i++) {

                    if ((pids[i] = fork()) < 0) {
                        perror("fork_2");
                        abort();
                    }

                    else if (pids[i] == 0) {
                        printf ("i_2 = %d\n", i);
                        printf ("Child_2\n");
                        count += 1;
                        printf ("Count_2 = %d\n\n", count);

                        printf ("Iдентифiкатор поточного процесу(2): %d\n", getpid());
                        printf ("Iдентифiкатор parental процесу(2): %d\n", getppid());
                        exit(0);

                    }
                }
            exit (0);
        }
    }


    return 0;
}
