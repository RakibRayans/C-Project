#include<stdio.h>
int main()
{
    while(1)
    {
        int n,i,j;
        printf("Enter any size  : ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=n;j>=i;j--)
                printf ("*");
            printf("\n");
        }
        //printf("*");

    }
    return 0;
}
