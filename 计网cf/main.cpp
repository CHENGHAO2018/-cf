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
		cout << "������Ҫִ�еĲ�����" << endl;
		cout << "0��������" << endl;
		cout << "1�����ɲ������·�ɱ�" << endl;
		cout << "2�����ӽڵ㣻" << endl;
		cout << "3�����ӱߣ�" << endl;
		cout << "4��ɾ���ڵ㣻" << endl;
		cout << "5��ɾ���ߣ�" << endl;
		cout << "������Ҫִ�еĲ�����" << endl;
		cin >> b;
		switch (b) {
		case 0:exit(0);
		case 1: {
			int m;
			cout << "������Ҫ��ѯ��·�����ĺ���";
			cin >> m;
			ALL_PATHS(m, N, COST, A, B);
			output(m,N, COST, A, B); 
			break; }
		case 2:N=addd(N, COST); break;
		case 3:addb(COST); break;
		case 4:deleted(N, COST); break;
		case 5:deleteb(COST); break;
		default:cout << "������Ч�����������룡"; break;
		}
	}
	return 0;
}