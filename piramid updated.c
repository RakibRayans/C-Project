#include<stdio.h>
main()
{
    int i,j,k,n,count=1;
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<k;j++)
            printf(" ");

        for(j=1;j<=i;j++)
        {
            printf("*");
            if(i>1 && count<i)
            {
                printf("R");
                count++;
            }
        }
        printf("\n");
        k--;
    }
    return 0;
}
