#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	// 1. 1 ~ 10까지의 합을 구해주세요. (답 : 55)

	int num = 0;

	for (int count = 1; count < 11; count++)
	{
			num += count;
			if (count == 10) {
				printf("%d\n", num);
			}
	}

	// 2. 10의 약수의 개수를 구해주세요. (답 : 4)

	int num2 = 0;

	for (int count = 1; count < 11; count++)
	{
		if (10 % count == 0) {
			num2++;
		}
		if (count == 10) {
			printf("%d\n", num2);
		}
	}

	// 3. 10의 약수의 합을 구해주세요. (답 : 18)

	int num3 = 0;

	for (int count = 1; count < 11; count++)
	{
		if (10 % count == 0) {
			num3 += count;
		}
		if (count == 10) {
			printf("%d\n", num3);
		}
	}

	// 4. 7이 소수인지 판별하고 소수라면 '소수'를 출력, 아니라면 '비소수'를 출력해주세요. (답 : 소수)
	// 소수는 1과 자기 자신만을 약수로 갖는 수를 말합니다.

	int num4;
	scanf("%d", &num4);

	for (int count = 2; count != num4; count++) {

		if (num4 % count == 0) {
			printf("비소수");
			break;
		}

		if (num4 == count + 1) {
			printf("소수");
		}
	}




	return 0;
}