//2021450017 �ż�����а� ��⼮
// ���� 1
#include <stdio.h>

int main(void) {

	char name[15]; //�̸� �Է��� ���� ���� name ����
	int bir; // ������� �Է��� ���� ���� bir����
	int stud_num; //�й� �Է��� ���� ���� stud_num ����
	char major[30]; //�а��� �Է��� ���� ���� major ���� 

	printf("�̸� �Է� : "); //�̸� �Է��� ���� �ڵ� ����
	scanf_s("%s", name, sizeof(name)); // scanf_s�� �̿��Ͽ� ���� �Է��� �̸��� ����
	printf("������� 8�ڸ� �Է� : ");//������� �Է��� ���� �ڵ� ����
	scanf_s("%d", &bir);// scanf_s�� �̿��Ͽ� ���� �Է��� ��������� ����
	printf("�й� �Է� : "); //�й� �Է��� ���� �ڵ� ����
	scanf_s("%d", &stud_num);//scanf_s�� �̿��Ͽ� ���� �Է��� �й��� �޾ƿ�
	printf("�а��� �Է� : ");//�а��� �Է��� ���� �ڵ� ����
	scanf_s("%s", major, sizeof(major));//scanf_s�� �̿��Ͽ� ������ �Է��� �а����� �޾ƿ�

	printf("\n�̸� : %s\n�������: %d\n�й� : %d\n�а���: %s", name, bir, stud_num, major);
	//printf �ڵ忡 ����ϰ��� �ϴ� ������ �Է��Ͽ� ������
}