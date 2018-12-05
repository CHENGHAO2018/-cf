# include "head.h"


void ReadData(const char* filename, int N, int **COST) {
	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 20; j++)
			if (i == j) { COST[i][j] = 0; }
			else {
				COST[i][j] = 999;
			}
			ifstream fin;
			fin.open(filename);
			for (int i = 1; i <= N; i++)
				for (int j = 1; j <= N; j++)
					fin >> COST[i][j];
}