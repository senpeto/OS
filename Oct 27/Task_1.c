#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char * argv[]) {
    setlocale(LC_ALL, "Ukrainian");

    printf ("Iдентифiкатор поточного процесу: %d\n", getpid());
    printf ("Iдентифiкатор parental процесу: %d\n", getppid());
    printf ("Iдентифiкатор групи викликаючого процесу: %d\n", getpgrp());
    printf ("Реальний iдентифiкатор власника викликаючого процесу: %d\n", getuid());
    printf ("Реальний iдентифiкатор групи викликаючого процесу: %d\n", getgid());
    printf ("eUID викликаючого процесу: %d\n", geteuid());
    printf ("eGID викликаючого процесу: %d\n", getegid());

    return 0;
}
