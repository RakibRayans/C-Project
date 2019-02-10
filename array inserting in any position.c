#include<stdio.h>
int main()
{
    int a[7]={5,7,3,8,9};
    int i,j,k=5,n=5,item=15;
    j=n;
    while(j>=k)
    {
        a[j+1]=a[j];
        j--;
    }
    a[k]=item;
    n=n+1;
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
