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
	Circle tmp(30); //radius=30�� CircleŸ�� ��ütmp���� 
	return tmp;// getCircle()�Լ��� ��ütmp�� ������. 

}
int main() {
	Circle c; //Ŭ����CircleŸ�� ��üc����,radius=1�� �ʱ�ȭ 
	cout << c.getArea() << endl; 

	//getcircle()�Լ��� ������ ��ütmp�� ��絥���͸� ��üc�� ��Ʈ������ ����, ��üc radius=30��. 
	c = getCircle();//getCircle()�Լ��� ��絥���͸� ��üc�� ��Ʈ������ ����.
	cout << c.getArea() << endl; 
}