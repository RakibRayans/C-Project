#include<stdio.h>

int add(int, int);
int main()
{
    int x;
    x =add(10,50);
    printf("The result is %d",x);
    return 0;
}
int add(int a, int b)
{
    int temp;
    temp = a + b;
    if(temp<0)
    {
        return 0;
    }
    else
    return temp;
}

