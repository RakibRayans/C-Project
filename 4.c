#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter how many line: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%4d",i%2);
        }
        printf("\n");
    }
    return 0;
}

