#include <iostream>
#include <string>
using namespace std; 

//�Լ����� ����
void star(int a = 5); //����Ʈ �Ű����� ����
void msg(int id, string text = " "); 

//�Լ� ������ 
void star(int a) {
	for (int i = 0; i < a; i++)//0~4�����ϱ� ��* 5�����. 
		cout << '*'; 
	cout<< endl;
}
void msg(int id, string text) {
	cout << id << '\t' << text << endl; 
}

int main() {
	star(10); //star()ȣ�� 
	star(); //�Ű����������� star()ȣ���̹Ƿ� �Լ��������������� ����Ʈ�Ű������� �ʱ�ȭ��. 
	msg(10);//id=10���� �ʱ�ȭ,text�� ���⿡ ����Ʈ�Ű�����text=" "������ �� ����-> msg(10," ")�� ����.
	msg(10, "STAR");//����Ʈ�Ű�����text="STAR"�� �ʱ�ȭ
}