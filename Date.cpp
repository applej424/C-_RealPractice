#include <iostream>
#include "stddef.h" //Null�� ������������ĺ��ڿ���������.
#define Null 0 //��ũ�� Null ����


using namespace std; 

class Date {
public: 
	//������� 
	int y, m, d; 
	char x; 
	//������ ���� 
	Date(int y, int m, int d); 
	Date(const char *nal);  

	void show();
	int getYear(), getMonth(), getDay(); 
};

//Ŭ���� ������
//������ ���� 
Date::Date(int y, int m, int d) {
	y, m, d; 
}

Date::Date(const char *nal) {
	char a[11]; 
	int strSize = 0; 
	strSize = strlen(nal);
	for (int i = 0; i< strSize; i++)
		a[i] = *(nal + i); 
		y= atoi(strtok(a, "/"));
		m= atoi(strtok(Null, "/")); 
		d= atoi(strtok(Null, "/"));
}

//����Լ� ����
void Date::show() {
	cout << y << "��" << m << "��" << d << "��" << endl; 
}

int Date::getYear() {
	return y; 
}
int Date::getMonth() {
	return m; 
}
int Date::getDay() {
	return d; 
}

int main() {
	Date birth(2020, 4, 24); //DateŸ�� �̸��� birth�� �Ű������ִ� ��ü ���� , �����ڵ� public �������Ǿ����� ����.
	Date independeceDay("1945/8/15"); //DateŸ�� �̸��� independenceDay�� �Ű������ִ� ��ü ����
	independeceDay.show(); // show() ����Լ��� Ŭ�������� public ������� 

	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl; 
}