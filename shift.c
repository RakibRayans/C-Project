#include<stdio.h>
int main()
{
    while (1)
    {
    int n;
    scanf("%d",&n);
    n= (n>>2);
    printf("n = %d\n",n);
    }
    return 0;
}
