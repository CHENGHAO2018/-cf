#include "head.h"


void deleteb(int **COST) {
	int a, b;
	cout << "������Ҫɾ���ıߵ�����·������" << endl;
	cout << "·����one��" << endl;
	cin >> a;
	cout << "·����two��" << endl;
	cin >> b;
	COST[a][b] = COST[b][a] = 999;
}
