#include<iostream>
using namespace std; 

class Circle {
private:
		int radius; //������ Ŭ���� �� ����Լ���  ���ٰ���.�ؿ� setRadius(r+1) 
public: 
	Circle(); 
	Circle(int r);
	~Circle(); 
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int Radius) { this->radius = radius; }//�Ű������ι��� Radius�� ������� Radius�� �����Ҵ� this������ ���

};
Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius =" << radius << endl; 
}

Circle::Circle(int radius) {
	this->radius = radius; 
	cout << "������ ���� radius =" << radius << endl; 
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius" << radius << endl; 
}

void increase(Circle c){//�Ű�������üwaffle�� ������ ��ü c�� �Ű������� ���� increase()�Լ�.
	int r = c.getRadius(); //��üc�� getRadius()����Լ��� ������ �� �ֵ��� public����Ǿ����� ����. 
	c.setRadius(r + 1);//public�������� setRadius(int r) �Լ�. 
}


int main() {
	Circle waffle(30);//�Ű������� ���� CircleŸ�� waffle��ü ����,Cricle������ ȣ����.
	increase(waffle);//�Ű������� ��ü�� ���� increase�Լ��⿡ ������ȣ�����.waffle��ü�� c�� �����ؼ� increse�Լ�ȣ��

	cout << waffle.getRadius() << endl; 
}