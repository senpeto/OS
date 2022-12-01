#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>

int i = 2;

void* foo(void* p){
	int itt1 = 1;
	while (itt1 < 11) {
	printf("Main Thread. Iteration: %d\n", itt1);
	itt1 += 1;
	sleep(1);
	}
	pthread_exit(&i);
}

int main(void){
	pthread_t id;
	
	int j = 1;
	pthread_create(&id, NULL, foo, &j);
	int* ptr;
	int itt2 = 1;
	pthread_join(id, (void**)&ptr);
	while (itt2 < 11) {
	printf("Child Thread. Iteration: %d\n", itt2);
	itt2 += 1;
	sleep(1);
	}
}
