#include <stdio.h>

int main()
{
    int a, sum = 0 ;
    while(scanf("%d", &a) != 0){
        if(a == 0)
            break;
        sum += a;}
    printf("%d", sum);
    return 0 ;
}
