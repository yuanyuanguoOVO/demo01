#include <stdio.h>
#define MAX 32

int main()
{
    printf("hello world~\n");
    printf("��ð�?\n");
    printf("hello world~\n");
    char x = 'a' - MAX + 1;
    printf("x=%d\n", x);
    int a = 2, b = 0;
    float c = 4.8f, d = 3.3, e = 0;
    printf("����ǿ��ת��\n");
    b = (int)(a + c + d);
    printf("b=%d\n", b);
    printf("ʮ������b=%#x\n", b);
    printf("�˽���b=%#o\n", b);
    e = c * d;
    printf("e=%0.3f\n", e);
    if (x<60)
    {
        printf("x<60");
    }
    else printf("x>60");
    
    return 0;
}
