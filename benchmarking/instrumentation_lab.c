#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
	*state = (*state * 1103515245u) + 12345u;
	return (*state);
}
static void build_dataset(void)
{
	unsigned int state;
	int i;

	state = SEED_VALUE;
	for (i = 0; i < DATASET_SIZE; i++)
		dataset[i] = (int)(next_value(&state) % 100000);
}
static void process_dataset(void)
{
	int i;
	int v;

	for (i = 0; i < DATASET_SIZE; i++)
	{
		v = dataset[i];
		v = (v * 3) + (v / 7) - (v % 11);
		if (v < 0)
			v = -v;
		dataset[i] = v;
	}
}
static unsigned long reduce_checksum(void)
{
	unsigned long sum;
	int i;

	sum = 0;
	for (i = 0; i < DATASET_SIZE; i++)
		sum = (sum * 131ul) + (unsigned long)dataset[i];
	return (sum);
}
int main(void)
{
	unsigned long checksum;
	clock_t t_total_start, t_total_end;
	clock_t t_build_start, t_build_end;
	clock_t t_process_start, t_process_end;
	clock_t t_reduce_start, t_reduce_end;
	double total_sec, build_sec, process_sec, reduce_sec;
	/* --- START total timer --- */
	t_total_start = clock();
	/* Phase 1: build */
	t_build_start = clock();
	build_dataset();
	t_build_end = clock();
	/* Phase 2: process */
	t_process_start = clock();
	process_dataset();
	t_process_end = clock();
	/* Phase 3: reduce */
	t_reduce_start = clock();
	checksum = reduce_checksum();
	t_reduce_end = clock();
	/* --- END total timer --- */
	t_total_end = clock();
	if (checksum == 0ul)
		printf("impossible\n");
	/* Convert to seconds */
	total_sec = (double)(t_total_end - t_total_start) / CLOCKS_PER_SEC;
	build_sec = (double)(t_build_end - t_build_start) / CLOCKS_PER_SEC;
	process_sec = (double)(t_process_end - t_process_start) / CLOCKS_PER_SEC;
	reduce_sec = (double)(t_reduce_end - t_reduce_start) / CLOCKS_PER_SEC;
	printf("TOTAL seconds: %.6f\n", total_sec);
	printf("BUILD_DATA seconds: %.6f\n", build_sec);
	printf("PROCESS seconds: %.6f\n", process_sec);
	printf("REDUCE seconds: %.6f\n", reduce_sec);
	return (0);
}
