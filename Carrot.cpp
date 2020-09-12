#include <iostream>
using namespace std; 

class Carrot {
private:
	int num1, num2; 
public: 
	Carrot(int n1, int n2) : num1(n1), num2(n2) {}
};

int main() {
	Carrot c1(3, 5); 
	Carrot c2 = c1; 
	return 0;
}



class AAA {
private: 
	int num; 
public: 
	AAA(int n) : num(n) {}
};

int main(){
	AAA obj = 10;
}