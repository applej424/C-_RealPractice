#include <iostream>
#include "stddef.h" //Null이 선언되지않은식별자오류가떠서.
#define Null 0 //매크로 Null 선언


using namespace std; 

class Date {
public: 
	//멤버변수 
	int y, m, d; 
	char x; 
	//생성자 선언 
	Date(int y, int m, int d); 
	Date(const char *nal);  

	void show();
	int getYear(), getMonth(), getDay(); 
};

//클래스 구현부
//생성자 구현 
Date::Date(int y, int m, int d) {
	y, m, d; 
}

Date::Date(const char *nal) {
	char a[11]; 
	int strSize = 0; 
	strSize = strlen(nal);
	for (int i = 0; i< strSize; i++)
		a[i] = *(nal + i); 
		y= atoi(strtok(a, "/"));
		m= atoi(strtok(Null, "/")); 
		d= atoi(strtok(Null, "/"));
}

//멤버함수 구현
void Date::show() {
	cout << y << "년" << m << "월" << d << "일" << endl; 
}

int Date::getYear() {
	return y; 
}
int Date::getMonth() {
	return m; 
}
int Date::getDay() {
	return d; 
}

int main() {
	Date birth(2020, 4, 24); //Date타입 이름이 birth인 매개변수있는 객체 생성 , 생성자도 public 멤버선언되어있을 것임.
	Date independeceDay("1945/8/15"); //Date타입 이름이 independenceDay인 매개변수있는 객체 생성
	independeceDay.show(); // show() 멤버함수는 클래스에서 public 멤버선언 

	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl; 
}