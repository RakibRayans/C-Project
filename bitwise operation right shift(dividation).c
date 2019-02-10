#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    x= n>>2;
    /*f0r n =7        = 00000111 = 7
    for 1 right shift = 00000011 = 3
    for 2 right shift = 00000001 = 1
    */
    printf("%d",x);
    return 0;
}

