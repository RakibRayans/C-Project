#include <stdio.h>
int main()
{
    while(1)
    {
    int n,i,j;
    printf("size : ");
    scanf("%d",&n);

    for(i = 1;i<=n;i++)
    {
        for(j = n;i<=j;j--)
        {
            printf(" *");
        }
        printf("\n");
    }
    }
    return 0;
}

