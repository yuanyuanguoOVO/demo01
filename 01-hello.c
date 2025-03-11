#include <stdio.h>
#define MAX 32

int main()
{
    printf("hello world~\n");
    printf("你好啊?\n");
    printf("hello world~\n");
    char x = 'a' - MAX + 1;
    printf("x=%d\n", x);
    int a = 2, b = 0;
    float c = 4.8f, d = 3.3, e = 0;
    printf("尝试强制转换\n");
    b = (int)(a + c + d);
    printf("b=%d\n", b);
    printf("十六进制b=%#x\n", b);
    printf("八进制b=%#o\n", b);
    e = c * d;
    printf("e=%0.3f\n", e);
    if (x<60)
    {
        printf("x<60");
    }
    else printf("x>60");
    
    return 0;
}
