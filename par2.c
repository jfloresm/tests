#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(){

	int i, n = 100, chunk = 10;

	double a[100], b[100], result = 0.0;

	for(i = 0; i < n; i++){

		a[i] = i;
		b[i] = i * 1.5;

	}

	#pragma omp parallel for default(shared) private(i) \ 
		schedule(static, chunk) \ 
		reduction(+:result)
		
		for(i = 0; i<n ; i++){

			result = result + (a[i] * b[i]); 

			printf("Final result  = %le \n", result);
		}

} 
