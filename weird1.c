#include <stdio.h>

int main(int argc, char ** argv){

	int *arr;
	int i;
	int size = 3;

	arr = (int *)malloc(sizeof(int)*size);

	for(i=0; i<size; i++){
		arr[i] = 3;
	}
	
	for(i=0; i<size; i++){
		printf("%d \n", arr[i]);
	}
	
	for(i=0; i<size; i++){
	printf("%d \n", arr + i);
	}	
	
	return 0;
} 
