#include <stdio.h>

struct student{
    int number;
    char name[20];
    double score;
};

struct student list[] = {
    { 20180001, "ȫ�浿", 4.2},
    { 20180002, "��ö��", 3.2},
    { 20180003, "ȫ�浿", 3.9},
};

int main(){
    struct student super_stu;
    int i, size;

    size = sizeof(list)/sizeof(list[0]);

    super_stu = list[0];
    for(i = 1; i < size; i++){
        if(list[i].score > super_stu.score){
            super_stu = list[i];
        }
    }

    printf("������ ���� ���� �л��� (�̸�: %s, �й�: %d, ����: %f)�Դϴ�.\n", super_stu.name, super_stu.number, super_stu.score);
    return 0;
}