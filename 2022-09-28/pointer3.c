#include <stdio.h>

/* 포인터 주의사항
int main(){
    int *p; // 아주 위험한 코드
    printf("%d\n", *p);
    *p = 100; 

    return 0;
}
*/

int main(){
    int *p = NULL;
    printf("%d\n", *p);
    *p = 100;

    return 0;
}
