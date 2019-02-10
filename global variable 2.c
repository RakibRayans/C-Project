#include<stdio.h>
int b=5;
void display();

int main()
{
    printf("%d from main function.\n",b);
    b++;
    display();
    return 0;
}
void display()
{
    printf("%d form display function.\n",b);

}
