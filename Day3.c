#include<stdio.h>

int main(void) {

  // %o : 8���� 
  // %x : 16����

  // �ϵ��ڵ�, �����ѹ� => ��������.

	const float PI = 3.1415926535897; // const (���ȭ Ű����) : �ڷ��� �տ� ���̸� ������ ���� ������ �ʰ� ���ش�.

	printf("%.10f\n", PI); // �Ҽ��� 10��° �ڸ����� �����ش�. 

  // unsigned �ڷ��� : ��ȣ��Ʈ�� ����ǥ���� ���. ������ �ʿ� ���� ������ �о߿� ���δ�. 


  // sizeof : �ڷ��� �Ǵ� ������ ũ�⸦ Ȯ���� �� �ִ�.
	printf("char�� ũ�� : %d\n", sizeof(char));
	printf("short�� ũ�� : %d\n", sizeof(short));
	printf("int�� ũ�� : %d\n", sizeof(int));
 


	

}