#include <iostream>
using namespace std; 

class Circle {
private: 
	int radius; //동일 클래스 내의 멤버함수ㅏ radius에 접근할수있도록.
public: 
	Circle(); 
	Circle(int r); 
	~Circle(); 

	double getArea() {
		return 3.14 * radius * 3.14;
	}
	int getRadius() {
		return radius;
	}
	void setRadius(int radius) {
		this->radius = radius;
	} 


};

Circle::Circle() {
	radius = 1; 
	cout << "생성자 실행 radius=" << radius << endl; 
}
Circle::Circle(int radius) {
	this->radius = radius; 
	cout << "생성자 실행 radius=" << radius << endl; 
}
Circle::~Circle(){
	cout << "소멸자 실행 radius=" << radius << endl; 
}

void increase(Circle& c) {//참조매개변수c에 waffle이 복사됨.
	int r = c.getRadius();
	c.setRadius(r + 1); //31결과값. 
}

int main(){
	Circle waffle(30); 
	increase Circle(waffle); //매개변수객체를가진 Circle객체 생성하는 increase()함수호출(참조에의한 호출)
	cout << waffle.getRadius() << endl; 
}