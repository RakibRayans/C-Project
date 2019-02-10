#include<stdio.h>
int main()
{
    while(1)
{
        int i,start,diff,end,sum = 0;
        scanf("%d %d %d",&start, &diff, &end);
        for(i=start;start<=end;start++)
        {
            sum=sum+diff;
            printf("%d\n",sum);
        }
        }

    return 0;
}
