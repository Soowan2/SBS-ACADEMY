#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// ����Ÿ�� �Լ��̸�(�Ű�����(������ ����)) { �ٵ� }
void �ٱ����λ�(int lang) {
	if (lang == 3) {
		printf("���긣\n");
	}
	else if (lang == 1) {
		printf("�ȳ��ϼ���\n");
	}
	else if (lang == 2) {
		printf("����\n");
	}
}

void �ٱ����λ�2(int lang, int count) {
	for (int a = 0; a < count; a++) {
		�ٱ����λ�(lang);
	}
}

int main(void) {

	�ٱ����λ�2(2, 3);

}