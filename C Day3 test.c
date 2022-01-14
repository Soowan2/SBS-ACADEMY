

#include <stdio.h>

int main(void) {

	// 문제 1 : 변수를 만들고 200을 넣은 후 출력해보세요.(가장 메모리를 효율적으로 사용해주세요.)


	short a = 200;

	printf("%d\n", a);

	// 문제 2 : 변수를 만들고 21억을 넣은 후 출력해보세요.(가장 메모리를 효율적으로 사용해주세요.)

	int b = 2100000000;

	printf("%d\n", b);

	// 문제 3 : 변수를 만들고 22억을 넣은 후 출력해보세요.(가장 메모리를 효율적으로 사용해주세요.)

	unsigned int c = 2200000000;

	printf("%u\n", c);

	// 문제 4 : 변수를 만들고 400억을 넣은 후 출력해보세요.(가장 메모리를 효율적으로 사용해주세요.)

	long long int d = 40000000000;

	printf("%lld\n", d); 

	// 문제 5 : 올바른 값을 출력해주세요.

	double result = 10.0 / 4.0;


	printf("%lf\n", result);


	// 출력 : 2.500000

	 // 정수 : int, 실수(소수) : float

	int e = 100;
	float f = 3.14;

	printf("%d\n", e); // 출력 : 100
	printf("%f\n", f); // 출력 : 3.140000

	e = 200;
	f = 10.5;

	printf("%d\n", e); // 출력 : 200
	printf("%f\n", f); // 출력 : 10.500000

	// 문제 : 변수 i와 j의 값을 교체해주세요.
    // 조건 : 출력예시대로 나와야 합니다.

	int i = 20;
	int j = 40;

	// 수정가능지역 시작
	
	j = i;
	i = 40;

	// 수정가능지역 끝

	printf("i : %d\n", i);
	// 출력 => i : 40
	printf("j : %d\n", j);
	// 출력 => j : 20

	return 0;
}