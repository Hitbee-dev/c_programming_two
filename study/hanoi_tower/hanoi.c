#include <stdio.h>

void hanoi(int n, char from, char temp, char to);


int main(void) {
	int n = 0;
	printf("������ ������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	
	hanoi(n, 'A', 'B', 'C');
	return 0;
}

void hanoi(int n, char from, char temp, char to) {
	if (n == 1) {
		printf(" 1�� ������ %c�࿡�� %c������ �ű��. \n", from, to);
	}
	else {
		hanoi(n - 1, from, to, temp);
		printf(" %d�� ������ %c�࿡�� %c������ �ű��. \n", n, from, to);
		hanoi(n - 1, temp, from, to);
	}
}