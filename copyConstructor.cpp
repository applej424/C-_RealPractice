#include <iostream>
using namespace std; 

class Copyconstructor {
	int num; 
	string name; 
public: 
	Copyconstructor() {} 
	Copyconstructor(int num, string name) { this->num = 5; this->name = name;  }
	Copyconstructor(const Copyconstructor& copy) : num(copy.num), name(copy.name) {
		cout << "디폴트 복사 생성자 호출한다" << endl; 
	}
	void fct_1(Copyconstructor obj) {
		cout << "fct_1() 실행" << endl; 
	}
	Copyconstructor fct_2(void) {
		Copyconstructor obj; 
		cout << "fct_2() 실행" << endl; 
		return obj; 
	}
};

int main() {
	Copyconstructor a(5, "KIM"); 
	a.fct_1(a); //객체 a를 인자로 받을 수 있는 디폴트 복사 생성자호출
	cout << "fct_1()실행 끝" << endl; 
	Copyconstructor b = a.fct_2(); 
	cout << "fct_2()실행 끝" << endl; 
	return 0; 
}