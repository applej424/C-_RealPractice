#include <iostream>
using namespace std;

//Ŭ���� �����(�������, ����Լ� ����) 
class Circle {
	//������� ������ ����, ����Լ� ����
public: //�ٸ� ��� ��ü,Ŭ�������� ����� ���ٰ����ϰ���. 
	int radius; 
	double getArea(); 
};//Ŭ���� ����� �����ݷ����� ��ġ��.

//Ŭ���� ����ο��� ������ ��� ����Լ������� ��������.
double Circle::getArea() {
	//getArea() ��� �Լ��� � behavior�� �ϴ��� 
	return 3.14 * radius * radius; 
}

//C++�� ������ �����ϴ� main()�Լ� 
int main() { 
	Circle pizza; //�̸��� pizza�� Circle Ÿ���� ��ü ����
	//��ü�� Ŭ������ ���(�������,�Լ�)�� �״�� ������ ���� 
	pizza.radius = 3; //��ü�� ��� ������ ����
	
	//��ü�� ����Լ��� ���� 
	double area = pizza.getArea(); // [��ü�̸�][��ü�̸��� ����Լ����̿� .������] [����Լ�ȣ��]
	cout << "Pizza�� ������" << area << endl; 

	Circle ball; //Circle Ÿ���� ��ü ball����(��ü�� ������ ������ �� ����) 
	ball.radius = 10;  //��ü ball�� ��������� ����
	area = ball.getArea();  //��ü ball�� ����Լ� ���� 
	cout << "ball�� ������" << area << endl; 
}