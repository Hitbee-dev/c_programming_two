#include <stdio.h>

struct student{
    int number;
    char name[20];
    double grade;
};

int main(){
    struct student s = { 20224161, "kimchan", 4.3};
    struct student *p;

    p = &s;

    printf("�й�: %d �̸�: %s ����: %f\n", s.number, s.name, s.grade);
    // ���������� ���
    printf("�й�: %d �̸�: %s ����: %f\n", (*p).number, (*p).name, (*p).grade);
    // �����ͷ� ���
    printf("�й�: %d �̸�: %s ����: %f\n", p->number, p->name, p->grade);
    // -> �����ڴ� ���� ��� �����ڷμ�, ����ü �����Ϳ��� �ٷ� ����ü�� ����� ������ �� �ִ�.

    return 0;
}