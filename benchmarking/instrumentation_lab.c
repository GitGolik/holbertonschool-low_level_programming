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
	clock_t start;
	clock_t end;
	double elapsed_total;
	double elapsed_build;
	double elapsed_process;
	double elapsed_reduce;
	int result_total;
	int result_build;
	int result_process;
	int result_reduce;
	/* Students must add clock-based timing and print required lines. */
	build_dataset();
	process_dataset();
	checksum = reduce_checksum();
	if (checksum == 0ul)
		printf("impossible\n");
	initialize_data();
	start = clock();
	result_total = next_value();
	end = clock();
	elapsed_total = (double)(end - start) / (double)CLOCKS_PER_SEC;

	start = clock();
	result_build = build_dataset();
	end = clock();
	elapsed_build = (double)(end - start) / (double)CLOCKS_PER_SEC;

	start = clock();
	result_process = process_dataset();
	end = clock();
	elapsed_process = (double)(end - start) / (double)CLOCKS_PER_SEC;

	start = clock();
	result_reduce = reduce_checksum();
	end = clock();
	elapsed_reduce = (double)(end - start) / (double)CLOCKS_PER_SEC;
	printf("TOTAL algorithm result: %d\n", result_total);
	printf("TOTAL time: %.6f second\n", elapsed_total);
	printf("BUILD algorithms result: %d\n", result_build);
	printf("BUILD time: %.6f second\n", elapsed_total);
	printf("PROCESS algorithms result: %d\n", result_process);
	printf("PROCESS time: %.6f second\n", elapsed_process);
	printf("REDUCE algorithms result: %d\n", result_reduce);
	printf("REDUCE time: %.6f second\n", elapsed_reduce);
	/*
	 * Required output (exact format, no extra lines):
	 * TOTAL seconds: <float>
	 * BUILD_DATA seconds: <float>
	 * PROCESS seconds: <float>
	 * REDUCE seconds: <float>
	 */
	return (0);
}
