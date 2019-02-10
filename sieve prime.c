#include<stdio.h>
int nprime;
int mark[10005],prime[1250];
int n = 10000;
void sieve()
{
    int i,j;
    mark[0]=1;
    mark[1]=1;
    prime[nprime]=2;
    nprime++;
    for(i=4; i<=n; i+=2)
    {
        mark[i]=1;
    }
    for(i=3; i<=n; i+=2)
    {
        if(mark[i]==0)
        {
            prime[nprime]=i;
            nprime++;
            if(i*i<=n)
            {
                for(j=i*i; j<=n; j+=(i*2))
                    mark[j]=1;
            }
        }
    }

}
int main()
{
    sieve();
    int i,j,x,index;
    scanf("%d",&x);
    if(mark[x]==1) printf("Composite number.");
    else if(mark[x]==0) printf("Prime number.");
    return 0;
}
