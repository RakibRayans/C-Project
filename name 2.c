#include<stdio.h>
int main()
{
    char name[20]="MD. Rakib Mia";
    printf("My name is %s \n", name);

    name[6]= 'z';
    printf("My name is %s\n ", name);
    return 0;
}

