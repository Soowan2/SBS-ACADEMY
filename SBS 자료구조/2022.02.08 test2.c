// 문제 : name1[0]을 수정하면 안되는 이유를 설명해주세요.

#include <stdio.h>
#include <string.h>

int main(void) {

	int a = 10;

	char* name1 = "abc";

	printf("name1[1] : %c\n", name1[1]);
	//name1[0] = 's'; // 이 코드가 안되는 이유를 설명해주세요.
	
	// 문자열 상수는 수정할 수 없다.
	 
	// *(name1 + 0)

	char name2[10] = "bbc";

	printf("name2 : %s\n", name2);
	name2[0] = 'k';
	printf("name2 : %s\n", name2);

	return 0;
}