#include<stdio.h>
int main()
{
    int n,i,j,a[100];
    int sum1 ;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<4;j++)
        {
            scanf("%d\t",&a[i]);
        }
    }
    for(i=1;i<=n;i++)
    {
    sum1=a[0]+a[1]+a[2]+a[3];
    }
    printf("%d",sum1);
}
