#include <iostream>
#include <string>
using namespace std; 

class Account {
public: 
	string name;
	int no, balance; 
	
	Account(); //������ ���� 
	Account(string n, int num, int b); 
	void deposit(int money); //����Լ����� 
	string getOwner(); 
	int inquiry(); 
	int withdraw(int money); 
};
//������ ���� 
Account::Account() { 
	name = " ", no = 0, balance = 0; 
}
Account::Account(string n, int num, int b) {//main()���� a��ü �����ÿ� �����. 
	name = n; no = num; balance = b; 
}

//����Լ����� 
void Account::deposit(int money) {
	balance += money; 
}
string Account::getOwner() {
	return name; 
}
int Account::inquiry() {
	return balance; // balance + money =balance �ݾ� ����
}
int Account::withdraw(int money) {
	balance -= money;
	return money; 
}

int main() {
	Account a("Kitae", 1, 5000); //���������� Kitae,���¹�ȣ�� 1��, �ܾ��� 5000���� ���� ��ü ���� 
	a.deposit(50000); //50000���� ����, deposit()�Լ� public�����ص־���. 
	cout << a.getOwner() << "�� �ܾ���" << a.inquiry() << endl; 
	int money = a.withdraw(20000); //20000�� ���. withdraw()�Լ��� ����ϰ����� �����ݾ��� ����ϹǷ� ��ȯ�������.
	cout << a.getOwner() << "�� �ܾ���" << a.inquiry() << endl; 
}