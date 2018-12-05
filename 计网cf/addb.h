#include"head.h"


void addb(int **COST) {
	int a, b;
	cout << "请输入要增加的边的两个路由器：" << endl;
	cout << "路由器one：" << endl;
	cin >> a;
	cout << "路由器two：" << endl;
	cin >> b;
	cout << "请输入该边的长度：" << endl;
	cin >> COST[a][b];
	COST[b][a] = COST[a][b];
}