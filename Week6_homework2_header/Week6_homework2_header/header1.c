#include <stdio.h> 

//정수 자료형을 파라미터로 하는 함수 
  //최대 공약수 함수
int max1(int a, int b) {
	int max = 0; //최대공약수의 값을 저장할 변수를 max로 선언 
	for (int i = 1; (i <= a) && (i <= b); ++i) {
		//공약수는 정수 a와 b로 둘 다 나누어지는 a와 b보다 작은 수이기 때문에 작을 때로 설정
		if (a % i == 0 && b % i == 0) max = i; //두 변수 a와 b의 값을 동시에 나누어 떨어지게 하는 값 i를 찾기 위해 설정  
	}
	return max; //최종적으로 max에 저장된 값이 최대공약수가 된다.

	printf("%d", max);
}

//최소 공배수 함수 
int min1(int a, int b) {
	//최소공배수는 두 수의 배수 중 가장 작은 값으로, 두 수를 곱한 값을 최대공약수로 나눈 값으로도 구할 수 있다.

	int max = 0; //최대공약수의 값을 저장할 변수를 max로 선언 
	for (int i = 1; (i <= a) && (i <= b); ++i) {
		//최소 공배수를 구하기 위해서, 먼저 최대 공약수를 설정

		if (a % i == 0 && b % i == 0) max = i; //두개의 값을 동시에 나누어 떨어지게 하는 값을 i라고 설정.
	}
	int min; //최소 공배수를 저장할 변수를 min으로 설정
	min = (a * b) / max; //최소 공배수를 구하기 위해 두 수의 곱을 최대 공약수로 나눈다.
	return min;// 최소 공배수의 값을 반환

	printf("%d", min);
}

//소수 판별 함수
int prime_number1(int num) {
	//1과 자기 자신만을 약수로 갖는 수를 소수라고 한다. 

	char true, false; //true, false 반환하기 위해서 선언
	true = 1; //true의 값을 1로 초기화
	false = 0; //false의 값을 0으로 초기화

	for (int i = 2; i < num; ++i) {
		//2부터 자기 자신보다 작은 수까지 나눴을 때, 하나라도 나눠지면 소수가 아니다.
		//따라서 2부터 (i < 자기자신)까지 반복문을 통해 나눠지고 나누어떨어지는 경우가 있으면, if문을 통해 false를 반환 
		if (num % i == 0) return false;

		else return true; // 나누어 떨어지는 수가 없을 시에는 true를 반환한다. 
	}
}

//파라미터 없이 수를 scanf로 받는 함수 
  //최대 공약수 함수
void max2(void) {
	int a, b;
	printf("num1 : ");
	scanf_s("%d", &a);
	printf("num2 : ");
	scanf_s("%d", &b); //printf와 scanf로 두개의 숫자를 입력 받고 변수에 저장

	int max = 0; //최대공약수의 값을 저장할 변수를 max로 지정
	for (int i = 1; (i <= a) && (i <= b); ++i) {
		//공약수는 정수 a와 b로 둘 다 나누어지는 a와 b보다 작은 수이기 때문에 작을 때로 설정, 전위 연산 실행 

		if (a % i == 0 && b % i == 0) max = i; //두개의 값을 동시에 나누어 떨어지게 하는 값을 i라고 한다.
	}
	printf("%d", max); //최종적으로 max에 저장된 값이 최대공약수가 된다.
}
//최소공배수 함수
void min2(void) {
	//최소공배수는 두 수를 곱한 값을 최대공약수로 나눈 값이다.
	int a, b;
	printf("num1:");
	scanf_s("%d", &a);
	printf("num2: ");
	scanf_s("%d", &b);
	//printf와 scanf로 두 숫자를 입력 받고 변수에 저장한다.

	int max = 0; //최대공약수의 값을 저장할 변수를 정수형 max로 선언한다. 
	for (int i = 1; (i <= a) && (i <= b); ++i) {
		//먼저 최대 공약수를 구하기 위해서 최대 공약수를 구하는 식 
		if (a % i == 0 && b % i == 0) max = i; //두개의 값을 동시에 나누어 떨어지게 하는 값을 i로 지정, max에 저장
	}
	int min; //최소공약수를 저장할 변수의 min으로 지정
	min = (a * b) / max; //최소공배수를 구하기 위해 두 수의 곱을 최대공약수로 나눈다
	printf("%d", min); // 최소공배수의 값을 출력
}


// 소수 판별 함수
void prime_number2(void) {
	//1과 자기 자신만을 약수로 갖는 수를 소수라고 한다. 

	int num;
	printf("num1:");
	scanf_s("%d", &num); //입력받은 수를 scanf를 통해 앞에서 선언한 변수에 저장

	for (int i = 2; i < num; i++) {
		//2부터 자기 자신보다 작은 수까지 나눴을 때, 하나라도 나눠지면 소수가 아니다.
		//따라서 2부터 (i < 자기자신)까지 반복문을 통해 나눠지고 나누어떨어지는 경우가 있으면 false를 반환
		if (num % i == 0) printf("false");

		else printf("true"); //나누어 떨어지는 수가 없을 시에 true를 반환한다.
	}
}
