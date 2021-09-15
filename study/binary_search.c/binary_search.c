//이진탐색

#include <stdio.h>
#define Size 20
int input_data(int list[], int sized, int input);

int main(void){
    int input;
    int list[Size] = {4, 7, 11, 12, 14, 19, 22, 23, 24, 32, 47, 49, 52, 53, 58, 59, 63, 65, 72, 80};

    printf("1~100사이의 값 중 탐색할 값을 입력 해 주세요: ");
    scanf("%d", &input);
    printf("탐색완료: %d(찾는 값이 없을 시 -1출력)\n", input_data(list, Size, input));
    return 0;
}

int input_data(int list[], int sized, int input){
    int l = 0;                              //인덱스 시작
    int h = sized-1;                        //인덱스 길이-1
    int result;
    while(l<=h){                            //인덱스 값이 low보다 high가 같거나 크면 반복
        result = (l + h) / 2;               //이진탐색을 위해 low인덱스와 high 인덱스를 더한 후 2로 나눔
        if(input == list[result]){          //찾는 값이 list[result]와 같다면
            return result;                  //찾는 index값 반환
        } else if(input < list[result]){    //만약 찾는 값이 list[result]보다 작다면
            h = result-1;                   //high값에 result-1를 넣어 상한을 낮춤
        } else {                            //만약 찾는 값이 list[result]보다 크다면
            l = result+1;                   //low값에 result+1을 넣어 하한을 높임
        }
    }
    return -1;                              //만약 찾는 값이 없다면 -1반환
}