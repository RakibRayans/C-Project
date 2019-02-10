#include<stdio.h>

void display(int mark[], int count)
{
    int i;
    for(i=0;i<count;i++){
    printf("The result of %d is %d\n",i,mark[i]);
    }
}
int main()
{
    int mark[10]={35,56,23,45,56,65};
    display(mark,6);
    return 0;
}
