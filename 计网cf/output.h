#include"head.h"

void output(int m,int N, int **COST, int **A, int **B) {
	
	cout << "****************·����" << m << "��·�ɱ�*********************" << endl;
	cout << "-----Ŀ��������������---------------��һ����ַ--------" << endl;
	for (int i = 1; i <= N; i++) {
		if (i != m && A[m][i] < 100) {
			cout << "     " << i << ".x.x.x";
			cout << "                        ·����" << B[m][i] << endl;
		}
	}
}