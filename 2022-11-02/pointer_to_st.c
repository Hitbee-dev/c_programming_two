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

    printf("학번: %d 이름: %s 학점: %f\n", s.number, s.name, s.grade);
    // 변수명으로 출력
    printf("학번: %d 이름: %s 학점: %f\n", (*p).number, (*p).name, (*p).grade);
    // 포인터로 출력
    printf("학번: %d 이름: %s 학점: %f\n", p->number, p->name, p->grade);
    // -> 연산자는 간접 멤버 연산자로서, 구조체 포인터에서 바로 구조체의 멤버로 접근할 수 있다.

    return 0;
}