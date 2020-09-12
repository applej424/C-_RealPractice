#include <iostream>
#include <cstring> 


using namespace std; 

class Person {
private:
	char* name;
	int num;  
public: 
	Person(const char* myname, int mynum) {
		int len = strlen(myname) + 1; //myname길이11 +'\n'의 길이(char,char*타입 문자열에서 필수포함) 
		name = new char[len];
		strcpy(name, myname);
		num = mynum;
	}

	void ShowPersonInfo() const {
		cout << "이름은: " << endl;
		cout << "나이는: " << endl;

	}
	~Person() {
		delete[]name;
		cout << "소멸자 실행" << endl;
	}
};


int main(void) {
	Person man0("Cha eun woo", 26); 
	Person man1 = man0; //Person man1(man0);객체대입연산 -> 복사생성자 호출 
	man0.ShowPersonInfo(); 
	man1.ShowPersonInfo(); 
	
	return 0; 
}