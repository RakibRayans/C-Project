#include<stdio.h>
int main()
{
    long long int x;
    int y=0,r;
    scanf("%lld",&x);
    while(x!=0){
    r=x%10;
    y=y*10+r;
    x=x/10;
    }
    printf("Revarse is %d ",y);
    return 0;

}
