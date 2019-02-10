#include<stdio.h>
int main()
{
    int age,currentyear,birthyear;
    currentyear = 2017;
    printf("Enter your birthday: ");
    scanf("%d",&birthyear);
    age = currentyear - birthyear;
    printf("You are %d years old",age);
    return 0;
}
