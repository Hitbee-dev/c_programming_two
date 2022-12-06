#include <stdio.h>

int main(void){
    // 읽을 이미지와, 복사할 이미지의 이름을 받을 파일 포인터 선언
    FILE *src_file, *dst_file;

    // 이미지의 이름을 받을 배열 선언
    char filename[100];

    // 이미지의 바꿀 이름을 받을 배열 선언
    char refilename[100];

    // 이미지를 복사할 때 데이터를 잠시 저장할 변수 선언
    char buffer;

    printf("복사 할 이미지 파일 이름: ");
    // scanf에 &를 사용하지 않는 이유는 filename 변수가 배열이기 때문 (배열 = 포인터)
    scanf("%s", filename);

    printf("복사 된 이미지 파일 이름: ");
    scanf("%s", refilename);

    // 읽을 이미지 읽기모드로 열기
    src_file = fopen(filename, "rb");
    // 복사할 이미지 쓰기모드로 열기
    dst_file = fopen(refilename, "wb");

    // 모든 데이터를 읽을 때 까지 반복 (feof는 파일의 끝 주소까지 도달했는지 확인하는 함수)
    while(!feof(src_file)){
        // 이미지는 0~255 사이의 값으로 이루어져 있다.
        buffer = fgetc(src_file);
        // 이걸 픽셀단위로 fgetc를 사용해서 가져와서 dst_file에 fputc를 이용해 보내는(복사하는) 것
        fputc(buffer, dst_file);
    }

    // 읽지 못했을 때 예외처리
    if (src_file == NULL || dst_file == NULL){
        fprintf(stderr, "파일 열기 오류\n");
        return 1;
    }

    // 읽었을 때 출력할 텍스트
    printf("%s 이름으로 %s 이미지 파일이 복사됨\n", refilename, filename);

    // fopen으로 열었던 파일을 fclose를 사용해 닫아준다.
    fclose(src_file);
    fclose(dst_file);
    return 0;
}