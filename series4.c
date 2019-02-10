#include <stdio.h>
int main()
{
    int a,n,d;
    printf("enter the 1st number ,a :\n");
    scanf("%d",&a);
    printf("enter how many numbers,n :\n");
     scanf("%d",&n);
    printf("enter the distance ,d :");
     scanf("%d",&d);

     int sum;
     sum = n/2 * ((2*a)+(n-1)*d);

     printf("%d",sum);
}
