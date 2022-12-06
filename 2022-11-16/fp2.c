// �Լ� ������ �迭
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
        printf("�޴��� �����ϼ���: ");
        scanf("%d", &choice);

        if (choice < 0 || choice >= 4){
            break;
        }

        printf("2���� ������ �Է��ϼ���: ");
        scanf("%d %d", &x, &y);

        result = fp[choice](x, y);
        printf("����� %d�Դϴ�.\n", result);
    }
    return 0;
}

void menu(){
    printf("==============\n");
    printf("0. ����\n");
    printf("1. ����\n");
    printf("2. ����\n");
    printf("3. ������\n");
    printf("4. ����\n");
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