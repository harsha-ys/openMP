#include <stdio.h>
#include <omp.h>

int main() {
   
   omp_set_num_threads(5);//define the number of threads in the parallel region
   
   #pragma omp parallel
   {
    printf("Hello, World!\n");
   }
   return 0;
}