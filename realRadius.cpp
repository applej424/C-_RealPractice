#include <iostream>
using namespace std; 

class Circle {
	int radius; 
public: 
	
	Circle() {	radius = 1;}
	Circle(int radius) {
		this->radius = radius;
	}
	void setRadius(int Radius) {
		this->radius = radius; //입력받은 매개변수 radius = radius가 되니까. 
	}
	double getArea() {
		return 3.14 * radius * radius;
	}

};
//참조매개변수&c  
void readRadius(Circle & c) {//참조매개변수c에는 pizza객체가복사됨. 
	int r; 
	cout << "정수값으로 반지름 입력>>"; 
	cin >> r; //키보드로 입력받은 반지름 값. 
	c.setRadius(r); //객체c의 반지름값을 설정,입력받은 r로. 
}
int main() {
	Circle pizza;//매개변수없는 객체를 생성,radius=1로초기화.
	readRadius(pizza); //pizza 객체를 매개변수로가지는 readRadius()함수호출 
	cout << "pizza면적은" << pizza.getArea() << endl; 
}