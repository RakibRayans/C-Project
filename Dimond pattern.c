#include<stdio.h>
main()
{
    int i,j,n,count;
    scanf("%d",&n);
    count=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=count;j++)
            printf(" ");
            count--;
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
    count=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=count;j++)
            printf(" ");
            count++;
        for(j=1;j<=2*(n-i)-1;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
