#include<stdio.h>
int main()
{
    int n,i,sum = 0;
    printf("How many number : ");
    scanf("%d",&n);
    for(i=1;1<=n;i++)
    sum = sum+i;
    printf("%d",sum);
    return 0;
}
