#include<stdio.h>
int main()
{
    char X ;
    scanf("%c",&X);
    if(X>=97 && X<=122)
        printf("Small");
    else (X>=65 && X<=90)
        printf("Capital");
    else printf("Others");
    return 0;
}
