//순차탐색
#include <stdio.h>
#define Size 10
int input_data(int list[], int id);

int main(void){
    int input;
    int list[Size] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("1~10 중 찾을 값을 입력 해 주세요: ");
    scanf("%d", &input);
    input_data(list, input);
    
    return 0;
}

int input_data(int list[], int id){
    for(int i = 0; i<Size; i++){
        if(list[i] == id){
            printf("탐색 완료. 해당 값의 인덱스는[%d]입니다.", i);
        }
    }
}