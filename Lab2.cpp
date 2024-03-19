#include <omp.h>
#include <stdio.h>

int main(){
	int n=8;
	int i; 
	#pragma omp parallel shared(n) private(i)
	{
		#pragma omp for
		for (i=0; i<n; i++){
			printf("Thread %d executes loop iteration %d\n", omp_get_thread_num(),i);
		}
		
	}
	return 0;
}