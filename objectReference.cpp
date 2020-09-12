#include <iostream>
using namespace std;

class Circle {
	int radius; 
public:
	Circle() {	radius = 1;}
	Circle(int radius) {
		this->radius = radius;
	}
	void setradius(int radius) 
		this->radius = radius; 
	}
	double getArea() {
		return 3.14 * radius * radius; 
	}

};



int main() {
	Circle circle; //radius=1로 초기화
	Circle& refc = circle; //circle객체를 참조하는 변수refc. 
	refc.setradius(10);//refc->setRadius(10);으로 하면안됨. 
	cout << refc.getArea() << " " << circle.getArea(); 
}