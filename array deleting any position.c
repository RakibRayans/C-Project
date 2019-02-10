#include<stdio.h>
int main()
{
    int a[7]={3,6,4,2,5};
    int i,j,k=3,n=5;
    while(j>=k)
    {
        a[j]=a[j+1];
        j--;
    }
    n=n-1;
    for(i=0;i<=n;i++)
    {
        printf("%d/n",a[i]);
    }
    return 0;
}
