#include <iostream>
#include <string>
using namespace std; 

class Account {
public: 
	string name;
	int no, balance; 
	
	Account(); //생성자 선언 
	Account(string n, int num, int b); 
	void deposit(int money); //멤버함수선언 
	string getOwner(); 
	int inquiry(); 
	int withdraw(int money); 
};
//생성자 구현 
Account::Account() { 
	name = " ", no = 0, balance = 0; 
}
Account::Account(string n, int num, int b) {//main()에서 a객체 생성시에 오출됨. 
	name = n; no = num; balance = b; 
}

//멤버함수구현 
void Account::deposit(int money) {
	balance += money; 
}
string Account::getOwner() {
	return name; 
}
int Account::inquiry() {
	return balance; // balance + money =balance 금액 리턴
}
int Account::withdraw(int money) {
	balance -= money;
	return money; 
}

int main() {
	Account a("Kitae", 1, 5000); //계좌주인은 Kitae,계좌번호는 1번, 잔액은 5000원인 계좌 객체 생성 
	a.deposit(50000); //50000원을 저금, deposit()함수 public선언해둬야함. 
	cout << a.getOwner() << "의 잔액은" << a.inquiry() << endl; 
	int money = a.withdraw(20000); //20000원 출금. withdraw()함수가 출금하고나서의 실제금액을 출력하므로 반환해줘야함.
	cout << a.getOwner() << "의 잔액은" << a.inquiry() << endl; 
}