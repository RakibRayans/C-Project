#include<stdio.h>
int main()
{
    int n,i,m,p,q,k,j;
    scanf("%d",&n);
    m=(n-1)/2;
    p=m-1,q=1;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if (i<m)
                for(k=1;k<=p;k++)
                printf(" ");
             if (i>m)
                for(k=1;k<=p;k++)
                printf(" ");
                p++;q++;
                printf("\n")
        }
    }
}
