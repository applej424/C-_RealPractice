#include <stdio.h>

void SayBye(int i){//사용자함수는 인자한개를 받음. 
	for(; i>0; i--){
		printf("bye.\n");
	} 
} 

int main(int argc, char **argv){
//main()함수내에서 사용자정의함수 두번호출 
	SayBye(5);//정수형값5가 SayBye(int i)의 인자 i에 저장->함수실행됨.
	int i1=3; 
	SayBye(i1);//두번째 호출함수의 인자인 i1의 값인 3을 함수의인자i에 전달함.  
}
