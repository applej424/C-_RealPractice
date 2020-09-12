#include<iostream>
using namespace std; 

class Circle {
private:
		int radius; //동일한 클래스 내 멤버함수만  접근가능.밑에 setRadius(r+1) 
public: 
	Circle(); 
	Circle(int r);
	~Circle(); 
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int Radius) { this->radius = radius; }//매개변수로받은 Radius를 멤버변수 Radius로 대입할대 this포인터 사용

};
Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius =" << radius << endl; 
}

Circle::Circle(int radius) {
	this->radius = radius; 
	cout << "생성자 실행 radius =" << radius << endl; 
}

Circle::~Circle() {
	cout << "소멸자 실행 radius" << radius << endl; 
}

void increase(Circle c){//매개변수객체waffle을 복사한 객체 c를 매개변수로 갖는 increase()함수.
	int r = c.getRadius(); //객체c가 getRadius()멤버함수에 접근할 수 있도록 public선언되어잇을 것임. 
	c.setRadius(r + 1);//public멤버선언된 setRadius(int r) 함수. 
}


int main() {
	Circle waffle(30);//매개변수를 갖는 Circle타입 waffle객체 생성,Cricle생성자 호출함.
	increase(waffle);//매개변수로 객체를 갖는 increase함수기에 생성자호출안함.waffle객체를 c에 복사해서 increse함수호출

	cout << waffle.getRadius() << endl; 
}