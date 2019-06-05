#include <stdio.h>

int main()
{
    int a=0 , b= 0 ;
    while(a<5){
        b = 0;
        while(b<a){
            printf("o");
            b++;
        }
    printf("*\n");
    a++ ;
    }
    return 0 ;
}
