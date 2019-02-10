#include<stdio.h>
int main()
{
    int n,j;
    scanf ("%d",&n);
    int i;
    for(j=1;j<=n;j++)
    {
    for(i=1;i<=10;i++)
    {
        printf("%d * %d =%d\n",j,i,(j*i));

    }
    printf("\n");
    }
    return 0;
}
