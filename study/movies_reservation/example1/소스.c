#define _CRT_SECURE_NO_WARNINGS

/*
* ���� ���� �ý���
�迭�� �̿��Ͽ� ������ ���� ����ý����� �ۼ��Ͽ�����.
���� ���� �����̶� �¼��� 10���ۿ� �ȵȴ�.
����ڰ� ������ �Ϸ����ϸ� ���� �¼� ��ġǥ�� �����ش�.
��, ������ ���� �¼��� 1��, ������ �� �� �¼��� 0���� ��Ÿ����.
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
			printf("1. ��ȭ �¼� Ȯ��\n");
			printf("2. ��ȭ �¼� ����\n");
			printf("3. ��ȭ �¼� ���\n");
			printf("4. ����\n");
			printf("------------------------\n");
			printf("���ϴ� �۾��� �Է��Ͻÿ�: ");
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
			printf("1~10 �¼� ����: ");
			if (!scanf("%d", &num)) {
				printf("���ڸ� �Է°����մϴ�. �ٽ� �Է��� �ּ���. \n");
				flag = 1;
				break;
			}
			else {
				if (seat[num - 1] == 1) {
					printf("�̹� ����� �¼� �Դϴ�.\n");
				}
				else {
					printf("%d ���ڸ��� ���� �Ǿ����ϴ�.\n", num);
					seat[num - 1] = 1;
				}
			}
			flag = 0;
			break;
		case 3:
			printf("����� �ڸ� ����:  ");
			if (!scanf("%d", &num)) {
				printf("���ڸ� �Է°����մϴ�. �ٽ� �Է��� �ּ���. \n");
				flag = 1;
				break;
			}
			else {
				if (seat[num - 1] == 1) {
					seat[num - 1] = 0;
					printf("%d ���ڸ� ������ ��� �Ǿ����ϴ�.\n",num);
				}
				else {
					printf("�� �ڸ��Դϴ�.\n");
				}
			}
			flag = 0;
			break;
		case 4:
			printf("����\n");
			break;
		default :
			printf("1~4 ���� �Է��ϼ���.\n");
			break;
		}
	} while (choice!=4);
	
	return 0;
}