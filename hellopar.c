#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(int argc, char ** argv){

	int nthreads = strtol(argv[1], NULL, 10);

	#pragma omp parallel num_threads(nthreads)

		printf("Hello from thread %d \n", omp_get_thread_num()); 

	return 0;

}

	

