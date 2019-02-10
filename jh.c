#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter how many line: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            pfrintf("%d",i+j-1);
        }
        printf("\n");
    }
    return 0;
}

