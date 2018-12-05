#include"head.h"
#include"addb.h"
#include"addd.h"
#include"ALL_PATHS.h"
#include"deleteb.h"
#include"deleted.h"
#include"output.h"
#include"ReadData.h"

int main()
{
	
	int N = 9;
	int **COST = NULL;
	COST = new int *[20];
	for (int i = 0; i < 20; i++)
		COST[i] = new int[20];
	int **A = NULL;
	A = new int *[20];
	for (int i = 0; i < 20; i++)
		A[i] = new int[20];
	int **B = NULL;
	B = new int *[20];
	for (int i = 0; i < 20; i++)
		B[i] = new int[20];
	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 20; j++)
			B[i][j] = 0;
	ReadData("data.txt", N, COST);
	int a, b;
	for (b = 0; b < 10000; b--) {
		cout << endl;
		cout << "请输入要执行的操作：" << endl;
		cout << "0：结束；" << endl;
		cout << "1：生成并且输出路由表；" << endl;
		cout << "2：增加节点；" << endl;
		cout << "3：增加边；" << endl;
		cout << "4：删除节点；" << endl;
		cout << "5：删除边；" << endl;
		cout << "请输入要执行的操作：" << endl;
		cin >> b;
		switch (b) {
		case 0:exit(0);
		case 1: {
			int m;
			cout << "输入想要查询的路由器的号码";
			cin >> m;
			ALL_PATHS(m, N, COST, A, B);
			output(m,N, COST, A, B); 
			break; }
		case 2:N=addd(N, COST); break;
		case 3:addb(COST); break;
		case 4:deleted(N, COST); break;
		case 5:deleteb(COST); break;
		default:cout << "输入无效，请重新输入！"; break;
		}
	}
	return 0;
}