#include <iostream>
using namespace std; 

class Circle {
private: 
	int radius; //���� Ŭ���� ���� ����Լ��� radius�� �����Ҽ��ֵ���.
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
	cout << "������ ���� radius=" << radius << endl; 
}
Circle::Circle(int radius) {
	this->radius = radius; 
	cout << "������ ���� radius=" << radius << endl; 
}
Circle::~Circle(){
	cout << "�Ҹ��� ���� radius=" << radius << endl; 
}

void increase(Circle& c) {//�����Ű�����c�� waffle�� �����.
	int r = c.getRadius();
	c.setRadius(r + 1); //31�����. 
}

int main(){
	Circle waffle(30); 
	increase Circle(waffle); //�Ű�������ü������ Circle��ü �����ϴ� increase()�Լ�ȣ��(���������� ȣ��)
	cout << waffle.getRadius() << endl; 
}