#include "head.h"


void deleteb(int **COST) {
	int a, b;
	cout << "请输入要删除的边的两个路由器：" << endl;
	cout << "路由器one：" << endl;
	cin >> a;
	cout << "路由器two：" << endl;
	cin >> b;
	COST[a][b] = COST[b][a] = 999;
}
