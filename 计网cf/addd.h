# include "head.h"


int addd(int N, int **COST) {
	int c;
	N = N + 1;
	for (c = 1; c == 1;) {
		cout << "是否继续增加边？" << endl;
		cout << "1：是；2：否；" << endl;
		cin >> c;
		if (c == 1)addb(COST);
	}
	return N;
}