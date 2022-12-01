#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

char str[] = "Some Text";

void *newThread(void *vargp)
{
int *id = (int *)vargp;

printf("Thread ID: %d, Str: %s\n", *id, str);
}

int main()
{
int i;
pthread_t tid;
for (i = 0; i < 4; i++) {
	pthread_create(&tid, NULL, newThread, (void *)&tid);
	
	sleep (1);
}
	pthread_exit(NULL);
return 0;
}
