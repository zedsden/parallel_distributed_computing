#include <omp.h>
#include <stdlib.h>
#include <stdio.h>

int main (int arg, char** argc){
	int th_id;
	int nthreads = omp_get_num_threads();
	#pragma omp parallel private(th_id)
	{
		th_id=omp_get_thread_num();
		printf("Hello World... from thread = %d\n", omp_get_thread_num());
	}
	return 0;
}