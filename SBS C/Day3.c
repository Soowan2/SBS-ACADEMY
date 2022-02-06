#include<stdio.h>

int main(void) {

  // %o : 8진수 
  // %x : 16진수

  // 하드코딩, 매직넘버 => 지양하자.

	const float PI = 3.1415926535897; // const (상수화 키워드) : 자료형 앞에 붙이면 변수의 값을 변하지 않게 해준다.

	printf("%.10f\n", PI); // 소수점 10번째 자리까지 보여준다. 

  // unsigned 자료형 : 부호비트를 숫자표현에 사용. 음수가 필요 없는 정보나 분야에 쓰인다. 


  // sizeof : 자료형 또는 변수의 크기를 확인할 수 있다.
	printf("char의 크기 : %d\n", sizeof(char));
	printf("short의 크기 : %d\n", sizeof(short));
	printf("int의 크기 : %d\n", sizeof(int));
 


	

}