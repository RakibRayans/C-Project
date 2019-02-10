#include<stdio.h>

void add(); // or add(int, int); or add(int a,int b);

int main()
{
    add(10, 15);
    return 0;
}

void add(int a, int b)
{
    int x;
    x = a + b;
    printf("The result of addition is %d\n",x);

}
