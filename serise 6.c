/* 7.7 2.1+5.3+8.5+..............upto n'th term */
#include<stdio.h>
int main()
{
    int i,n,sum= 0;
    printf("How many number: ");
    scanf("%d",&n);
    for(i = 1;i<=n;i++)
    {


    sum= sum+(i*3-1)*(i*2-1);
    printf("%d\t",sum);
    }
    return 0;
}
