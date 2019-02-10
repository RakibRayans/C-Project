#include<stdio.h>
int main()
{
    int x= 10;

    printf("The value of x is %d\n",x++);
    printf("The value of x is %d\n",x);
    printf("The value of x is %d\n",x--);
    printf("The value of x is %d\n",x);
    printf("The value of x is %d\n",--x);
    //x= x++ + x++ + x-- + --x;
    printf("The value of x is %d\n",x+ --x);
    return 0;
}
