#include <stdio.h>
#include <omp.h>
int main() {
int n = 100;
int result[n];
#pragma omp parallel
{
// Experiment with different scheduling options: static, dynamic, guided
#pragma omp for schedule(dynamic)
for (int i = 0; i < n; i++) {
int thread_id = omp_get_thread_num();
result[i] = thread_id * n + i;
}
}
printf("Results with dynamic scheduling:\n");
for (int i = 0; i < n; i++) {
printf("%d ", result[i]);
}
printf("\n");
return 0;
}