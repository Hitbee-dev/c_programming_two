#include <stdio.h>
#define SIZE 10

char check;
int check_seat;
int seat[SIZE] = {0};

int main(){
	while(1){
		printf("좌석을 예약하시겠습니까?(y 또는 n) ");
		scanf(" %c", &check);

		if (check == 'y'){
			printf("------------------------------------\n");
			printf("  1  2  3  4  5  6  7  8  9  10  \n");
			printf("------------------------------------\n");
			printf("  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  \n", seat[0], seat[1], seat[2], seat[3], seat[4], seat[5], seat[6], seat[7], seat[8], seat[9]);

			printf("몇번째 좌석을 예약하시겠습니까? ");
			scanf("%d", &check_seat);
			
			if (check_seat > SIZE || check_seat < 1){
				printf("잘못된 자리입니다.\n");
			} else {
				if (seat[check_seat-1] == 1){
					printf("이미 예약된 자리입니다.\n");
				} else {
					seat[check_seat-1] = 1;
					printf("예약되었습니다.\n");
				}
			}
			
		} else if(check == 'n') {
			printf("예약을 취소합니다.\n");
			break;
		}
	}
	
	return 0;
}
