//write a program 4+ 12+ 20+ 28+ ......... upto n
#include<stdio.h>
int main()
{
    int i,n,sum = 0;
    printf("How many number : ");
    scanf("%d",&n);
    for(i=4; i<=n; i = i + 8)
    {
        sum= sum+i;

    }
     printf("%d\t", sum);
}
