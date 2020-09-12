#include <iostream>
using namespace std;

//클래스 선언부(멤버변수, 멤버함수 선언) 
class Circle {
	//멤버변수 반지름 선언, 멤버함수 선언
public: //다른 모든 객체,클래스에서 멤버에 접근가능하게함. 
	int radius; 
	double getArea(); 
};//클래스 선언부 세미콜론으로 마치기.

//클래스 선언부에서 정의한 모든 멤버함수에대한 구현하자.
double Circle::getArea() {
	//getArea() 멤버 함수가 어떤 behavior를 하는지 
	return 3.14 * radius * radius; 
}

//C++이 실제로 실행하는 main()함수 
int main() { 
	Circle pizza; //이름이 pizza인 Circle 타입의 객체 생성
	//객체는 클래스의 모양(멤버변수,함수)를 그대로 가지고 간다 
	pizza.radius = 3; //객체의 멤버 변수에 접근
	
	//객체의 멤버함수에 접근 
	double area = pizza.getArea(); // [객체이름][객체이름과 멤버함수사이에 .연산자] [멤버함수호출]
	cout << "Pizza의 면적은" << area << endl; 

	Circle ball; //Circle 타입의 객체 ball생성(객체는 여러개 생성할 수 있음) 
	ball.radius = 10;  //객체 ball의 멤버변수에 접근
	area = ball.getArea();  //객체 ball의 멤버함수 접근 
	cout << "ball의 면적은" << area << endl; 
}