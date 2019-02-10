#include<stdio.h>
int main()
{
    int a[100],n,i,t,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d\n",a[i]);
    }
    t=a[0];
    k=a[n-1];
    a[0]=k;
    a[n-1]=t;
    printf("\n");
    for(i=0;i<n;i++)
    {

        printf("%d\n",a[i]);
    }
    return 0;
}
