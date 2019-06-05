#include <stdio.h>

int main()
{
    int a=0 ,b =0, c=0, sum =0;
    scanf("%d", &a);

    while (b<a){
        scanf("%d", &c);
        sum += c ;
        b++;
    }
    printf("%.2lf", (double)sum/a);
    return 0 ;
}
