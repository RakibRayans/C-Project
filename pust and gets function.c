#include<stdio.h>
int main()
{
    char name[10];
    char food[10];
    char sentence[100] = "";

    puts("what is the name of ur?");
    gets(name);

    puts("What does u eat?");
    gets(food);

    strcat(sentence,name);
    strcat(sentence," like to eat ");
    strcat(sentence,food);

    puts(sentence);
    return 0;

}
