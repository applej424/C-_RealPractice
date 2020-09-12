#include <iostream>
#include <cstring> 


using namespace std; 

class Person {
private:
	char* name;
	int num;  
public: 
	Person(const char* myname, int mynum) {
		int len = strlen(myname) + 1; //myname����11 +'\n'�� ����(char,char*Ÿ�� ���ڿ����� �ʼ�����) 
		name = new char[len];
		strcpy(name, myname);
		num = mynum;
	}

	void ShowPersonInfo() const {
		cout << "�̸���: " << endl;
		cout << "���̴�: " << endl;

	}
	~Person() {
		delete[]name;
		cout << "�Ҹ��� ����" << endl;
	}
};


int main(void) {
	Person man0("Cha eun woo", 26); 
	Person man1 = man0; //Person man1(man0);��ü���Կ��� -> ��������� ȣ�� 
	man0.ShowPersonInfo(); 
	man1.ShowPersonInfo(); 
	
	return 0; 
}