#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    x= n<<3;
    /*f0r n =7        = 00000111 = 7
    for 1 right shift = 00001110 = 14
    for 2 right shift = 00011100 = 28
    */
    printf("%d",x);
    return 0;
}
