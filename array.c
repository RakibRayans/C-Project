#include<stdio.h>
int main()
{
    int i,n,a[100];
    printf("Enter how many numbers : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%4d\n",a[i]);
    }
    return 0;
}
