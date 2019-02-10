#include<stdio.h>
int main()
{
    int a[100],b[100],i,n=5,x;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        x=a[i]*b[i];
        printf("%d * %d = %d\n",a[i],b[i],x);
    }
    return 0;
}
