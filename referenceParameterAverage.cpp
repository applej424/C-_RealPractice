#include <iostream>
using namespace std; 

bool average(int a[], int size, int& avg) {//average()�Լ��� ���� �Ű����� &avg�� ��հ����� 
	if (size <= 0)
		return false; 



}


int main() {
	int x[] = { 0,1,2,3,4,5 }; 
	int avg;  
	if (average(x, 6, avg)) //avg�� ����� �Ѿ����,average()�� true������. 
		cout << "�����" << avg << endl;
	else cout << "�Ű����� ����" << endl; 

	if (average(x, -2, avg)) //avg���� �ǹ̰����� average()�� false�� ���Ͻ� 
		cout << "�����" << avg << endl;
	else cout << "�Ű� ���� ����" << endl; 

}