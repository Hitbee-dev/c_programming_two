// 함수 포인터 배열
#include <stdio.h>

void menu();
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

int main(){
    int (*fp[4])(int, int) = {add, sub, mul, div};
    int choice, result, x, y;

    while(1){
        menu();
        printf("메뉴을 선택하세요: ");
        scanf("%d", &choice);

        if (choice < 0 || choice >= 4){
            break;
        }

        printf("2개의 정수를 입력하세요: ");
        scanf("%d %d", &x, &y);

        result = fp[choice](x, y);
        printf("결과는 %d입니다.\n", result);
    }
    return 0;
}

void menu(){
    printf("==============\n");
    printf("0. 덧셈\n");
    printf("1. 뺄셈\n");
    printf("2. 곱셈\n");
    printf("3. 나눗셈\n");
    printf("4. 종료\n");
    printf("==============\n");
}

int add(int x, int y){
    return x + y;
}

int sub(int x, int y){
    return x - y;
}

int mul(int x, int y){
    return x * y;
}

int div(int x, int y){
    return x / y;
}