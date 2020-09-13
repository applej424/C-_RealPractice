#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
	EvenRandom();
	int next();
	int nextInRange(int x, int y);
};
EvenRandom::EvenRandom() {
	srand((unsigned)time(0));
}
int EvenRandom::next() {
	int n = rand(); 
	if (n % 2 == 0) return n; 
	else return n - 1;
}


int EvenRandom::nextInRange(int x, int y) {
	int n= rand() % (y - x + 1) + x;
	if (n % 2 == 0) return n;
	else return n - 1;
}

int main() {
	EvenRandom r;
	cout << " -0에서" << RAND_MAX << "까지의 랜덤정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); //0~ RAND_MXA(32767)사이의 랜덤한 정수다. 
		cout << n << " ";
	}
	cout << endl << endl << " --2에서 " << "10까지의 랜덤정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10); //2~10까지 랜덤한 정수다.
		cout << n << " ";
	}
	cout << endl;
}
