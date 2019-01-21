#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(){

	int omp_get_thread_num();

	#pragma omp parallel
	{
		
		printf("rank of thread is %d \n", omp_get_thread_num());

	}

	return 0;

}

		
