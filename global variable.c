#include<stdio.h>
int a=5,b=3; /// Global variable.
void display();
void display2();

int main()
{
    int x;   /// Local variable.
    x=a + b;
    printf("%d from main function.\n",x);
    display();
    return 0;
}
void display()
{
    int x;
    x = a*b;

    printf("%d from display function.\n",x);
}

