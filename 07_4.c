#include <stdio.h>

int main()
{
    int a, b = 0 ;
    printf("�� ���� �Է��ϼ���");
    scanf("%d", &a);
    while(b<9)
    {
        printf("%d x %d = %d\n", 9-b, a, (9-b)*a);
        b++;
    }
    return 0 ;
}
