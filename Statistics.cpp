#include <iostream>
using namespace std; 
class Statistics {
	int* p; 
	int index; 
public: 
	Statistics() {
		p = new int[10]; index = 0;
	}
	~Statistics() {
		delete[] p;
	}
	bool operator!(); 
	Statistics& operator>>(int& avg); 
	void operator~(); 
	Statistics& operator>>(int& avg); 
};
bool Statistics::operator!() {
	if (index == 0) return true;
	else return false; 
}
Statistics&Statistics::operator>>(int x) {
	p[index] = x; 
	++index; 
	return *this; 
}
void Statistics::operator~() {
	for (int i = 0; i < index; ++i)
		cout << p[i] << endl; 
}
Statistics& Statistics::operator >>(int& avg) {
	int sum = 0; 
	for (int i = 0; i < index; ++i)
		sum += p[i]; 
	avg = sum / index; 
	return *this; 
}
int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계 데이터가 없습니다." << endl;
	int x[5];
	cout << "5개 정수입력";
	for (int i = 0; i < 5; ++i) cin >> x[i];
	for (int i = 0; i < 5; ++i) stat<< x[i];
	stat << 100 << 200;
	~stat;
	int avg;
	stat > .avg;
	cout << "avg=" << avg << endl;
}
