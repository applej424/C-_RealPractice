#include <iostream>
using namespace std; 

class Circle {
	int radius; 
public:
	Circle() { radius = 1;  }//�� a�� ������ȣ�� 
	Circle(int n) { radius = n;  }//�� b�� ������ ȣ��. 
	double getArea() { return 3.14 * radius * radius;  }
	int getRadius() { return radius;  }
	void setRadius(int n); 
};

void Circle::setRadius(int radius) {
	this->radius = radius; //�Ű����� radius = ������� radius 
}
void swap(Circle& a, Circle& b) {
	Circle tmp; 
	tmp = a; 
	a = b; 
	b = tmp; 
}

int main() {
	Circle a, b(10); //������1�� �ʱ�ȭ�ϳ� �� a,������10�� �� b���� 
	cout << "�� a�� �������� " << a.getRadius() << "�� b�� ��������" << b.getRadius() << endl; 
	cout << "swap ���� �� ��ü�� ��ȯ�ȴ�" << endl; 
	swap(a, b);//�����Լ�ȣ��.a,b�� ���ҽ��ÿ������ǰ�, &a,&b�� ���� 
	cout << "�� a�� �������� " << a.getRadius() << "�� b�� �������� " << b.getRadius() << endl; 
}