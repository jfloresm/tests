#include <stdio.h>

int main(int argc, char ** argv){

	int a = 4;
	int b;
	int *p;

	p = &a;
	b = *p + 2;

	printf("%d and %d \n", b, *p);

	return 0;
} 
	
