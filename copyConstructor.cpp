#include <iostream>
using namespace std; 

class Copyconstructor {
	int num; 
	string name; 
public: 
	Copyconstructor() {} 
	Copyconstructor(int num, string name) { this->num = 5; this->name = name;  }
	Copyconstructor(const Copyconstructor& copy) : num(copy.num), name(copy.name) {
		cout << "����Ʈ ���� ������ ȣ���Ѵ�" << endl; 
	}
	void fct_1(Copyconstructor obj) {
		cout << "fct_1() ����" << endl; 
	}
	Copyconstructor fct_2(void) {
		Copyconstructor obj; 
		cout << "fct_2() ����" << endl; 
		return obj; 
	}
};

int main() {
	Copyconstructor a(5, "KIM"); 
	a.fct_1(a); //��ü a�� ���ڷ� ���� �� �ִ� ����Ʈ ���� ������ȣ��
	cout << "fct_1()���� ��" << endl; 
	Copyconstructor b = a.fct_2(); 
	cout << "fct_2()���� ��" << endl; 
	return 0; 
}