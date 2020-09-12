#include <iostream>
#include <string>
using namespace std; 

//함수원형 선언
void star(int a = 5); //디폴트 매개변수 선언
void msg(int id, string text = " "); 

//함수 구현부 
void star(int a) {
	for (int i = 0; i < a; i++)//0~4까지니까 별* 5개찍기. 
		cout << '*'; 
	cout<< endl;
}
void msg(int id, string text) {
	cout << id << '\t' << text << endl; 
}

int main() {
	star(10); //star()호출 
	star(); //매개변수가없는 star()호출이므로 함수원형에서선언한 디폴트매개변수로 초기화됨. 
	msg(10);//id=10으로 초기화,text는 없기에 디폴트매개변수text=" "공백이 들어갈 것임-> msg(10," ")와 같다.
	msg(10, "STAR");//디폴트매개변수text="STAR"로 초기화
}