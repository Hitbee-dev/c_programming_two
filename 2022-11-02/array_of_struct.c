#include <stdio.h>
#define SIZE 3

struct student {
    int number;
    char name[20];
    double score;
};

int main(void)
{
    struct student list[SIZE];
    
    for(int i = 0; i < SIZE; i++){
        printf("\n�й��� �Է��Ͻÿ�: ");
        scanf("%d", &list[i].number);
        printf("�̸��� �Է��Ͻÿ�: ");
        scanf("%s", &list[i].name);
        printf("������ �Է��Ͻÿ�: ");
        scanf("%lf", &list[i].score);
    }

    for(int i = 0; i < SIZE; i++){
        printf("�й�: %d, �̸�: %s, ����: %.2lf\n", list[i].number, list[i].name, list[i].score);
    }
    return 0;
}