#include<stdio.h>
int main()

{
    int i,n,sum = 0;
    printf("how many number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i*2-1;
    printf("Sum = %d",sum);
    return 0;
}
