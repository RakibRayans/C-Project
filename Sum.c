#include <stdio.h>
int main()
{
    while(1)
    {

        int a,b,c,d,e,f;
        printf("Enter 2 digits: ");
        scanf("%d%d",&a,&b);


        if(b != 0 )
        {
            c = a/b;
            printf("%d",c);
        }
        else printf("invalid\n");
        // printf("C= %d\nD= %d\nE= %d\nF= %d",c,d,e,f);
        /*Program is complete*/
        printf("\nWE ARE GOOD FOR NOTHING!!!!!!!!\n\n");
    }
    return 0;
}
