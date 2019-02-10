#include<stdio.h>
#include<math.h>
int main()
{
    int year1,year2,age;

    printf("Enter any year:");
    scanf("%d",&year1);

    printf("Enter any year:");
    scanf("%d",&year2);

    age = year1 - year2;

    age =abs(age);
    printf("age is %d\n",age);

}
