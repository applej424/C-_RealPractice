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
		this->radius = radius; //�Է¹��� �Ű����� radius = radius�� �Ǵϱ�. 
	}
	double getArea() {
		return 3.14 * radius * radius;
	}

};
//�����Ű�����&c  
void readRadius(Circle & c) {//�����Ű�����c���� pizza��ü�������. 
	int r; 
	cout << "���������� ������ �Է�>>"; 
	cin >> r; //Ű����� �Է¹��� ������ ��. 
	c.setRadius(r); //��üc�� ���������� ����,�Է¹��� r��. 
}
int main() {
	Circle pizza;//�Ű��������� ��ü�� ����,radius=1���ʱ�ȭ.
	readRadius(pizza); //pizza ��ü�� �Ű������ΰ����� readRadius()�Լ�ȣ�� 
	cout << "pizza������" << pizza.getArea() << endl; 
}