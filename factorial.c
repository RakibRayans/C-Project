#include<stdio.h>
int main()
{
    int n,i,x=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=i*x;
    }
    printf("%d",x);
    return 0;
}