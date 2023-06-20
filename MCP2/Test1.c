#include<stdio.h>
#include<omp.h>

void main(void)
{
	int i;

	omp_set_num_threads(2);

#pragma omp parallel
#pragma omp for
	for(i = 0; i<10; i++)
	{
		printf("This iteration is %d and is using thread %d\n", i, omp_get_thread_num());
	}

}