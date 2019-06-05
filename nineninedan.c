#include <stdio.h>

int main()
{
    int num , dan =0 ;
    for (dan = 1; dan < 10; dan++)
        for (num=1; num<10; num++)
            printf("%dx%d=%d\n", num, dan, num*dan);
    return 0 ;
}

