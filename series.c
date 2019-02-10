#include<stdio.h>
int main()

{
    while(1)
    {

        int i,n,sum=0;
        printf("How many number : ");
        scanf("%d",&n); /* input */
        for(i=1; i<=n; i++) // loop
            sum=sum+i;
        printf("Sum is = %d\n",sum); //output

    }
    return 0;
}
