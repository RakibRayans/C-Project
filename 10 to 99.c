#include<stdio.h>
int main()
{
    int i,n,j;
    while(1)
    {
    scanf("%d",&n);
    int num=1;

    for(i=1;i<n;i++)
        num=num*10;

    j=num;
    if(num==1) num--;
    for(i=num;i<j*10;i++)
    printf("%d  ",i);

     printf("\n");
    }
}

