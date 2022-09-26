#include <stdio.h>

int main(){
    int chulsoo = 100; // 철수네 집 주소는 100번지
    
    // 찬이랑 영희가 철수네 집에 놀러옴
    int *chan = NULL; // 찬이는 철수네 집 주소를 모르고
    int *younghee = &chulsoo; // 영희는 철수네 집 주소를 잘 못 알고있음

    // 신나게 놀다가

    chan = &chulsoo; // 찬이가 철수네에 치킨을 보내주기 위해 철수한테 주소를 받아옴
    *younghee = 200; // 옆에있던 영희가 철수네 주소를 안다며 지 혼자 주문을 해버림(잘 못 알고있는 주소로)

    printf("Chulsoo Address: %d\n", chulsoo);    

    return 0;
}