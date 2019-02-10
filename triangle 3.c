#include <stdio.h>
int main()
{
    while(1)
    {
        int n,i,j;
        printf("size : ");
        scanf("%d",&n);
        for(i = 1; i<=n; i++)
        {
            for(j = n; j>=i; j--)
            {
                printf(" ");
            }
            for(j = 1; j<=i; j++)
            {
                printf(" 0");
            }
            printf("\n");
        }
    }
    return 0;
}


