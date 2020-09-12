#include<iostream>
using namespace std; 

int main() {
	cout << 'i' << '\t' << 'n' << '\t' << 'refn' << endl; 
	int i = 1; 
	int n = 2; 
	int &renf = n; //n의 참조변수 refn.refn의 값이 2인것은 아님. 
	n = 4; 
	refn++; //n=5, refn=5
	cout << i << '\t' << n << '\t' << refn << endl; 

	refn = i; //refn=1, n=1
	refn++; //refn=2, n=2
	cout << i << '\t' << n << '\t' << refn << endl; 

	int * p = &refn;// 참조변수refn은 n의 다른이름이므로, p는 n의 주소를 가짐. 
	*p = 20; //refn=20, n=20,포인터p가 가리키는 주소=n의주소.
	
	cout << i << '\t' << n << '\t' << refn << endl;
}