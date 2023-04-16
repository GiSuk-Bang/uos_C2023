//2021450017 신소재공학과 방기석
// 과제 1
#include <stdio.h>

int main(void) {

	char name[15]; //이름 입력을 위한 변수 name 설정
	int bir; // 생년월일 입력을 위한 변수 bir설정
	int stud_num; //학번 입력을 위한 변수 stud_num 설정
	char major[30]; //학과명 입력을 위한 변수 major 설정 

	printf("이름 입력 : "); //이름 입력을 위한 코드 설정
	scanf_s("%s", name, sizeof(name)); // scanf_s를 이용하여 위에 입력한 이름을 받음
	printf("생년월일 8자리 입력 : ");//생년월일 입력을 위한 코드 설정
	scanf_s("%d", &bir);// scanf_s를 이용하여 위에 입력한 생년월일을 받음
	printf("학번 입력 : "); //학번 입력을 위한 코드 설정
	scanf_s("%d", &stud_num);//scanf_s를 이용하여 위에 입력한 학번을 받아옴
	printf("학과명 입력 : ");//학과명 입력을 위한 코드 설정
	scanf_s("%s", major, sizeof(major));//scanf_s를 이용하여 위에서 입력한 학과명을 받아옴

	printf("\n이름 : %s\n생년월일: %d\n학번 : %d\n학과명: %s", name, bir, stud_num, major);
	//printf 코드에 출력하고자 하는 포맷을 입력하여 마무리
}