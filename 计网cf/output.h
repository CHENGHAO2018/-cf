#include"head.h"

void output(int m,int N, int **COST, int **A, int **B) {
	
	cout << "****************路由器" << m << "的路由表*********************" << endl;
	cout << "-----目的主机所在网络---------------下一跳地址--------" << endl;
	for (int i = 1; i <= N; i++) {
		if (i != m && A[m][i] < 100) {
			cout << "     " << i << ".x.x.x";
			cout << "                        路由器" << B[m][i] << endl;
		}
	}
}