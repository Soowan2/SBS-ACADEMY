#define _CRT_SECURE_NO_WARNINGS // scanf�� ����Ҷ� ������ �������ʰ� ����
#include<stdio.h>

int main(void) {


	// �Է� -> 


	float data;  // �Է°��� ������ ����

	// printf("%d\n",data); // ���Ĺ���

	// scanf("%f" , &data); // �Է�

	// printf("����ڰ� �Է��� ������ : %f", data); 


	// ������ �Է¹޴� ��
	int year;
	int month;
	int day;

	// �Է��� �Ϸ� : ���� �Ǵ� �ٹٲ�
	// scanf("%d", &year);
	// scanf("%d", &month);
	// scanf("%d", &day);

	

	// �ѹ��� �Է� �ޱ�
	printf("����� ������ �Է����ּ���. (��������� ,�� �������ּ���)\n");

	scanf("%d,%d,%d", &year, &month, &day); // �Է�,�Է�,�Է� ���� �Է��Ѵ�. (�޸��� �̿��Ͽ� ����) -�̳� ������ �̿��ϴ°͵� �����ϴ�. 

	printf("%d�� %d�� %d�� �Դϴ�.\n", year, month, day);

	// ��� ������
	// ���ϱ� : +
	// ���� : -
	// ���ϱ� : *
	// ������ : /
	// ������ : %

	// �� ������

	return 0;
}