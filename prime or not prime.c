#include<stdio.h>
int main()
{
    int i,n,r=0;
    printf("Enter the valu of n: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            r=1;
            else r=0;
            break;
    }
    if(r=1)
        printf("Not Prime ");
    if(r=0)
             printf("Prime ");

    return 0;
}
