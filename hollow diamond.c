#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            printf("  ");
        for(j=1;j<=2*(n-i)+1;j++)
        {
            if(j==1 || j==2*(n-i)+1)
             printf(" *");
            else printf("  ");
        }
         printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("  ");
        for(j=1;j<=2*(n-i)+1;j++)
        {
             if(j==1 || j==2*(n-i)+1)
             printf(" *");
            else printf("  ");
        }
         printf("\n");
    }
}

