#include <stdio.h>

void SayBye(int i){//������Լ��� �����Ѱ��� ����. 
	for(; i>0; i--){
		printf("bye.\n");
	} 
} 

int main(int argc, char **argv){
//main()�Լ������� ����������Լ� �ι�ȣ�� 
	SayBye(5);//��������5�� SayBye(int i)�� ���� i�� ����->�Լ������.
	int i1=3; 
	SayBye(i1);//�ι�° ȣ���Լ��� ������ i1�� ���� 3�� �Լ�������i�� ������.  
}
