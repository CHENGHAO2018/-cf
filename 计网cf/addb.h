#include"head.h"


void addb(int **COST) {
	int a, b;
	cout << "������Ҫ���ӵıߵ�����·������" << endl;
	cout << "·����one��" << endl;
	cin >> a;
	cout << "·����two��" << endl;
	cin >> b;
	cout << "������ñߵĳ��ȣ�" << endl;
	cin >> COST[a][b];
	COST[b][a] = COST[a][b];
}