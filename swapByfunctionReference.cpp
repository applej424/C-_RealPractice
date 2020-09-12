#include <iostream>
using namespace std; 

class Circle {
	int radius; 
public:
	Circle() { radius = 1;  }//원 a의 생성자호출 
	Circle(int n) { radius = n;  }//원 b의 생성자 호출. 
	double getArea() { return 3.14 * radius * radius;  }
	int getRadius() { return radius;  }
	void setRadius(int n); 
};

void Circle::setRadius(int radius) {
	this->radius = radius; //매개변수 radius = 멤버변수 radius 
}
void swap(Circle& a, Circle& b) {
	Circle tmp; 
	tmp = a; 
	a = b; 
	b = tmp; 
}

int main() {
	Circle a, b(10); //반지름1로 초기화하나 원 a,반지름10인 원 b생성 
	cout << "원 a의 반지름은 " << a.getRadius() << "원 b의 반지름은" << b.getRadius() << endl; 
	cout << "swap 후의 두 객체는 교환된다" << endl; 
	swap(a, b);//스왑함수호출.a,b가 스왑스택에생성되고, &a,&b에 복사 
	cout << "원 a의 반지름은 " << a.getRadius() << "원 b의 반지름은 " << b.getRadius() << endl; 
}