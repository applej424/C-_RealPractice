#include<iostream>
using namespace std; 

int main() {
	cout << 'i' << '\t' << 'n' << '\t' << 'refn' << endl; 
	int i = 1; 
	int n = 2; 
	int &renf = n; //n�� �������� refn.refn�� ���� 2�ΰ��� �ƴ�. 
	n = 4; 
	refn++; //n=5, refn=5
	cout << i << '\t' << n << '\t' << refn << endl; 

	refn = i; //refn=1, n=1
	refn++; //refn=2, n=2
	cout << i << '\t' << n << '\t' << refn << endl; 

	int * p = &refn;// ��������refn�� n�� �ٸ��̸��̹Ƿ�, p�� n�� �ּҸ� ����. 
	*p = 20; //refn=20, n=20,������p�� ����Ű�� �ּ�=n���ּ�.
	
	cout << i << '\t' << n << '\t' << refn << endl;
}