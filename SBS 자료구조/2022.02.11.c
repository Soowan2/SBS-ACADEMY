#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	
	// 행렬처럼 생각
	// 2차원 배열 타입
	//char names2[3][3] = {
	//	{1,2,3},
	//	{4,5,6},
	//	{7,8,9}
	//}; //[행][렬] // names2 -> char()[3] -> char사이즈 * 3 읽거나 사용. 이동도 3씩 이동

	//int ages2[3][3]; // ages2 -> int()[3] -> int 사이즈 * 3 읽거나 사용. 이동도 12씩 이동

	//printf("%ld\n", (long)names2[0]); // 배열의 주소 나옴
	//printf("%ld\n", (long)names2[1]);
	//printf("%ld\n", (long)names2[2]);

	//printf("%ld\n", (long)ages2[0]); // 배열의 주소 나옴
	//printf("%ld\n", (long)ages2[1]);
	//printf("%ld\n", (long)ages2[2]);

	//printf("%d\n", names2[2][0]);

	char names[5][20]; // names -> char()[20] : names 20바이트씩 읽거나 사용. 이동도 20씩

	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 사람의 이름 입력 : ", i + 1);
		//scanf("%s", names + i);
		scanf("%s", names[i]); // names[i] 와 &names[i] 의 차이는? 
		                       // names[i]는 배열의 주소 &names[i] 배열의 주소의 주소 하지만 값은 동일한 값을 불러온다.
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 사람의 이름 : %s\n", i + 1, names + i);
	}

}