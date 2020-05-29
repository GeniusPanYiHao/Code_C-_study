#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define M 3
#define N 3
#define K 3
int main()
{
	int A[M][K] = { 0 };
	int B[K][N] = { 0 };
	int C[M][N] = { 0 };
	int i = 0;
	int j = 0;
	int m = 0;
	printf("«Î ‰»ÎAæÿ’Û£∫\n");
	for (i = 0; i < M; i++)
	{
		printf("Aæÿ’Ûµƒ%d––\n", i);
		for (j = 0; j < K; j++)
		{
			scanf_s("%d", &A[i][j]);
		}
	}
	printf("«Î ‰»ÎBæÿ’Û£∫\n");
	for (i = 0; i < K; i++)
	{
		printf("Bæÿ’Ûµ⁄%d––\n", i);
		for (j = 0; j < N; j++)
		{
			scanf_s("%d", &B[i][j]);
		}
	}
	printf("Cæÿ’Û:\n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			int sum = 0;
			for (m = 0; m < K; m++)
			{
				sum = sum + A[i][m] * B[m][j];
			}
			C[i][j] = sum;
		}
	}
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%3d", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}