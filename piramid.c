#include<stdio.h>
int main()
{
    int i,j,n,R=1;
    printf("How many line = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%4d",R++);
        }
        printf("\n");
    }
    return 0;
}
