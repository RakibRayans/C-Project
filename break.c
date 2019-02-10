#include<stdio.h>
int main()
{
    int a;
    int howmany;
    int maxAmount= 10 ;

   printf("How many times you want to lope to lope?(not up to 10) ");
   scanf("%d",&howmany);

   for(a=1;  a<=maxAmount; a++)
   {
       printf("%d:  Rakib is a Progremer\n", a);

       if( a== howmany)
       break;
   }

    return 0;
}
