#include <stdio.h>
#include <time.h>

void main() {
    // ���浱ǰ���ں�ʱ����Ϣ
    time_t tm;

    // ȡ�õ�ǰ�����ں�ʱ��
    time(&tm);

    // ����ʾ������ʾ���ں�ʱ��
    printf("%s\n", ctime(&tm));
}
