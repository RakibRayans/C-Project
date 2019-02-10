#include<stdio.h>

void function1();
void function2();

int main()
{
    function1();
    main();
    return ;
}

void function1(){
   function2();
}
void function2()
{
    printf("I am hare.");
}
