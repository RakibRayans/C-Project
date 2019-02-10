#include<stdio.h>
int main()
{
    int i,n,a[100],sum= 0,avg;
    printf("Enter how many numbers: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    printf("AVERAGE = %d\n",sum/n);
    return 0;
}

