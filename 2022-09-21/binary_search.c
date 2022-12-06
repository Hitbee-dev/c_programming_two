// 중요!!
// scanf 사용 위해서는 stdio.h 위에 define 명시!

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 16 // 배열의 크기

int main(void) {
	int key, i;
	int list[SIZE] = { 2, 6, 11, 13, 18, 20, 22, 27, 29, 30, 34, 38, 41, 42, 45, 47 };
	// 이진 탐색 계산 변수
	int low, high, middle;

	// 탐색할 값 입력받기
	printf("탐색할 값을 입력하시오: ");
	scanf("%d", &key); // & 필수!

	// 이진 탐색
	low = 0;
	high = SIZE - 1;
	
	while (low <= high) {
		// 하한(low)과 상한(high) 출력
		printf("[%d, %d]\n", low, high);
		middle = (low + high) / 2; // 소수점 나와도 자동 버림 처리

		// key 가 중앙값과 같은 경우
		if (key == list[middle]) {
			printf("탐색 성공! 인덱스= %d \n", middle);
			break;
		}
		// key 가 현재 중앙값보다 큰 경우
		else if (key > list[middle]) {
			// 하한(low)을 중앙 우측으로 이동시킴
			low = middle + 1;
		}
		// key 가 현재 중앙값보다 작은 경우
		else {
			// 상한(high)를 중앙 좌측으로 이동시킴
			high = middle - 1;
		}
	}

	printf("탐색 종료");

	return 0;
}