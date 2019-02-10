#include<stdio.h>
int main()
{
    int i,n,j;
    printf("enter how many line: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%4d",i);
        }
        printf("\n");
    }
    return 0;
}
