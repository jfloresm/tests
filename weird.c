#include <stdio.h>

int sum(int a, int b, int c){

	return a + b + c;
}

int main(int argc, char ** argv){

	int *arr;
	int i;
	int size = 3;

	arr = (int *)malloc(sizeof(int) * size);

	for(i = 0; i < size; i++){		

		arr[i] = i;

	}

	printf("%d \n", sum(arr[0],arr[1],arr[2]));

	return 0;

}
