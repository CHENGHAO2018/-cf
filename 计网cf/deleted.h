#include"head.h"



void deleted(int N, int **COST) {
	int i, j;
	int d;
	cout << "������Ҫɾ����·������" << endl;
	cin >> d;
	for (i = 1; i <= N; i++)
		for (j = 1; j <= N; j++)
			if (i == d || j == d)COST[i][j] = 999;
}