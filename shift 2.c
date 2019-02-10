#include<stdio.h>
int main()
{
    while (1)
    {
    int n;
    scanf("%d",&n);
    n= (n>>5)+n;
    printf("n = %d\n",n);
    }
    return 0;
}

