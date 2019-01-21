#include <stdio.h>

int main(int argc, char ** argv){

	int a[9][9];
	int i;
	int j; 

	for(i=0; i<9 ;i++){

		for(j=0; j<9; j++){

			a[i][j] = (i+1)*(j+1);

		}
	}

	for(i=0; i<9 ;i++){

		for(j=0; j<9; j++){

			printf("the value for a[%d][%d] is %2d \n", i, j, a[i][j]);

		}
	}

	return 0;
}
