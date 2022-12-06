#include <stdio.h>

int main(void){
    // ���� �̹�����, ������ �̹����� �̸��� ���� ���� ������ ����
    FILE *src_file, *dst_file;

    // �̹����� �̸��� ���� �迭 ����
    char filename[100];

    // �̹����� �ٲ� �̸��� ���� �迭 ����
    char refilename[100];

    // �̹����� ������ �� �����͸� ��� ������ ���� ����
    char buffer;

    printf("���� �� �̹��� ���� �̸�: ");
    // scanf�� &�� ������� �ʴ� ������ filename ������ �迭�̱� ���� (�迭 = ������)
    scanf("%s", filename);

    printf("���� �� �̹��� ���� �̸�: ");
    scanf("%s", refilename);

    // ���� �̹��� �б���� ����
    src_file = fopen(filename, "rb");
    // ������ �̹��� ������� ����
    dst_file = fopen(refilename, "wb");

    // ��� �����͸� ���� �� ���� �ݺ� (feof�� ������ �� �ּұ��� �����ߴ��� Ȯ���ϴ� �Լ�)
    while(!feof(src_file)){
        // �̹����� 0~255 ������ ������ �̷���� �ִ�.
        buffer = fgetc(src_file);
        // �̰� �ȼ������� fgetc�� ����ؼ� �����ͼ� dst_file�� fputc�� �̿��� ������(�����ϴ�) ��
        fputc(buffer, dst_file);
    }

    // ���� ������ �� ����ó��
    if (src_file == NULL || dst_file == NULL){
        fprintf(stderr, "���� ���� ����\n");
        return 1;
    }

    // �о��� �� ����� �ؽ�Ʈ
    printf("%s �̸����� %s �̹��� ������ �����\n", refilename, filename);

    // fopen���� ������ ������ fclose�� ����� �ݾ��ش�.
    fclose(src_file);
    fclose(dst_file);
    return 0;
}