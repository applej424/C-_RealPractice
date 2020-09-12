#include <iostream>
using namespace std; 

class Circle {
	int radius; 
public: 
	Circle() {	radius = 1;}
	Circle(int radius) {
		this->radius = radius;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}

	double getArea() {return 3.14 * radius * radius;}
	
};


Circle getCircle() { //
	Circle tmp(30); //radius=30인 Circle타입 객체tmp생성 
	return tmp;// getCircle()함수는 객체tmp를 리턴함. 

}
int main() {
	Circle c; //클래스Circle타입 객체c생성,radius=1로 초기화 
	cout << c.getArea() << endl; 

	//getcircle()함수가 리턴한 객체tmp의 모든데이터를 객체c에 비트단위로 복사, 객체c radius=30됨. 
	c = getCircle();//getCircle()함수의 모든데이터를 객체c에 비트단위로 복사.
	cout << c.getArea() << endl; 
}