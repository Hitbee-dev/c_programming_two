#include <stdio.h>

int main(){
	int x = 10, y = 20; // x, y값 초기화
	int *px, *py; // 포인터 변수 선언

	px = &x; // px에 x의 주소값 저장
	py = &y; // py에 y의 주소값 저장

	printf("x = %d\n", x);   	 // x값 출력
	printf("y = %d\n\n", y); 	 // y값 출력

	printf("px = %u\n", px);	 // px값 출력
	printf("*px = %d\n\n", *px); // px가 가리키는 값 출력

	printf("py = %u\n", py);	 // py값 출력
	printf("*py = %d\n", *py); 	 // py가 가리키는 값 출력
	return 0;
}
