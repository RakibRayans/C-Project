#include<stdio.h>
int main()
{
    int n,x,y;
    char c;
    printf("Enter the value: ");
    scanf("%d",&n);
    printf("Enter + or - : ");
    scanf(" %c",&c);
    if(c=='+')x=n+10;
    else if(c=='-')x=n-10;
    printf("%d\n",x);
    return 0;
}

