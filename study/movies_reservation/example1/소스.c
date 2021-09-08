#define _CRT_SECURE_NO_WARNINGS

/*
* 극장 예약 시스템
배열을 이용하여 간단한 극장 예약시스템을 작성하여보자.
아주 작은 극장이라서 좌석이 10개밖에 안된다.
사용자가 예약을 하려고하면 먼저 좌석 배치표를 보여준다.
즉, 예약이 끝난 좌석은 1로, 예약이 안 된 좌석은 0으로 나타낸다.
*/

#include<stdio.h>
#define SIZE 10

int main(void) {
	int seat[SIZE] = { 0 };
	int choice = 0;
	int num = 0;
	int flag = 0;
	do {
		if (flag == 0) {
			printf("------------------------\n");
			printf("1. 영화 좌석 확인\n");
			printf("2. 영화 좌석 예매\n");
			printf("3. 영화 좌석 취소\n");
			printf("4. 종료\n");
			printf("------------------------\n");
			printf("원하는 작업을 입력하시오: ");
			scanf("%d", &choice);
		}		
		while (getchar() != '\n');
		switch (choice) {
		case 1:	
			for (int i = 0; i < SIZE; i++) {
				printf("%d ", seat[i]);
			}printf("\n");
			break;
		case 2:
			printf("1~10 좌석 선택: ");
			if (!scanf("%d", &num)) {
				printf("숫자만 입력가능합니다. 다시 입력해 주세요. \n");
				flag = 1;
				break;
			}
			else {
				if (seat[num - 1] == 1) {
					printf("이미 예약된 좌석 입니다.\n");
				}
				else {
					printf("%d 번자리에 예약 되었습니다.\n", num);
					seat[num - 1] = 1;
				}
			}
			flag = 0;
			break;
		case 3:
			printf("취소할 자리 선택:  ");
			if (!scanf("%d", &num)) {
				printf("숫자만 입력가능합니다. 다시 입력해 주세요. \n");
				flag = 1;
				break;
			}
			else {
				if (seat[num - 1] == 1) {
					seat[num - 1] = 0;
					printf("%d 번자리 예약이 취소 되었습니다.\n",num);
				}
				else {
					printf("빈 자리입니다.\n");
				}
			}
			flag = 0;
			break;
		case 4:
			printf("종료\n");
			break;
		default :
			printf("1~4 값만 입력하세요.\n");
			break;
		}
	} while (choice!=4);
	
	return 0;
}