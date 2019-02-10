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
    return temp; /// but hare without return function it's working !!,
                ///so why we use return function hare,or what it's actually did ?
}
