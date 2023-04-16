# include <stdio.h>

//함수 정의
void conv(unsigned int n, int k) {//10진수의 수를 받아 k진수로 만드는 함수 이름을 conv로 정의, 앞의 수가 0일 수 있기에 unsigned int로 받음

	if (n < k) {
		printf("%X", n);
	}//재귀함수를 사용했기 때문에 k로 나눈 후의 나머지가 이 조건문에 들어와서 끝남
	//10진법 이상부터는 ASCII 코드로 알파벳을 받아야 하기 때문에 "%X"로 출력
	else {
		conv(n / k, k); //k로 나눈 나머지를 출력한 후, 몫을 k로 나눈 값을 다시 함수에 넣어서 실행, 재귀함수를 이용하여 순서 맞춰주기
		printf("%X", n % k); //k로 나누었을 때의 나머지를 쓰고, 몫을 다음 계산으로 넘겨 실행
	}
}

int main(void) {
	int n, k;// 변환하고자 하는 10진 법 수 n을 받아 k진법으로 변환
	printf("변환할 10진수 입력 : ");
	scanf_s("%d", &n);//입력 받은 수를 변수 n에 저장
	printf("변환할 진법 입력 (2-16) : ");
	scanf_s("%d", &k);//변환할 진법 수를 변수 k에 저장
	conv(n, k); //입력받은 n과 k로 위에 정의해놓은 함수conv를 실행
}
