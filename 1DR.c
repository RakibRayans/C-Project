#include<stdio.h>
int main()
{
    int i,n,r[100];
    printf("How many numbers = ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&r[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%4d",r[i]);
    }
    return 0;

}
