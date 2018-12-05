#include"head.h"

void ALL_PATHS(int m, int N, int **COST, int **A, int **B)
{
	cout << "¸¶Ë«½Ü";
	int i, j, k;
	for (i = 1; i <= N; i++)
		for (j = 1; j <= N; j++)
			A[i][j] = COST[i][j];
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++)
			for (k = 1; k <= N; k++)
				if (A[i][k] + A[k][j] < A[i][j])
				{
					A[i][j] = A[i][k] + A[k][j];
					B[i][j] = k;
				}
		}
	for (i = 0; i <= N; i++) {
		if (B[m][i] == 0)B[m][i] = i;
	}
	
}
