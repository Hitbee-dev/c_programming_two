//이진탐색
#include <stdio.h>
#define Size 16
int input_data(int list[Size], int sized, int input);

int main(void){
    int input, sized;
    int list[Size] = {2, 6, 11, 13, 18, 20, 22, 27, 29, 30, 34, 38, 41, 42, 45, 47};
    printf("탐색할 값을 입력 해 주세요: ");
    scanf("%d", &input);
    printf("탐색결과: %d",input_data(list, Size, input));

    return 0;
}

int input_data(int list[], int sized, int id){
    int low, high, middle;
    low = 0; //인덱스 값
    high = sized-1; //인덱스 값
    while (low<=high){ //low가 high보다 커질때까지 반복
        middle = (low+high)/2; //인덱스를 반으로 나눔
        if(id == list[middle]){ //만약 반으로 나눈 인덱스와 값이 같다면
            return middle; //middle값이 정답이므로 반환
        } else if(id>list[middle]){ //만약 입력받은 값이 list[middle]값보다 크다면
            low = middle + 1; // low에 middle+1 추가하고 다시 while loop
        } else {
            high = middle -1; //아니라면, high값에 middle-1을 추가하고 다시 while loop
        }
    }
    return -1; //찾는 값이 없다면 -1반환
}