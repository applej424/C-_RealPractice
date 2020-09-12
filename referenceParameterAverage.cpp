#include <iostream>
using namespace std; 

bool average(int a[], int size, int& avg) {//average()함수에 참조 매개변수 &avg에 평균값전달 
	if (size <= 0)
		return false; 



}


int main() {
	int x[] = { 0,1,2,3,4,5 }; 
	int avg;  
	if (average(x, 6, avg)) //avg에 평균이 넘어오고,average()는 true리턴함. 
		cout << "평균은" << avg << endl;
	else cout << "매개변수 오류" << endl; 

	if (average(x, -2, avg)) //avg값이 의미가없고 average()는 false를 리턴시 
		cout << "평균은" << avg << endl;
	else cout << "매개 변수 오류" << endl; 

}