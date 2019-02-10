#include<stdio.h>
//#include<conio.h>
int main()
{
    int n,start,end,diff,sum;
    scanf("%d%d%d",&start, &end, &diff);
    sum = 0;
    for(n=start; n<=end;n=n+diff)
    {
         sum = sum +n;
        //printf("%d\n",sum);
       // sum = sum +n;
    }
    printf("%d\n",sum);
    return 0;
    }
