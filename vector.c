#include <stdio.h>

int main(int argc, char ** argv){
	
	int a[5];
	int i;

	for(i=0; i<5; i++){
		a[i] = 2*i;
	}

	for(i=0; i<5; i++){
		printf("The value of a[%d] is %d \n", i, a[i]);
	}

	return 0;
}


