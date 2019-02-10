#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    switch(x){
    case 'a': printf("%c & asci vale is %d\n",x,x);
    break;

    case 'A': printf("%c & asci vale is %d\n",x,x);
    break;

    case 'b': printf("%c & asci vale is %d\n",x,x);
    break;

    case 'B': printf("%c & asci vale is %d\n",x,x);
    break;

    case 'c': printf("%c & asci vale is %d\n",x,x);
    break;

    case 'C': printf("%c & asci vale is %d\n",x,x);
    break;

    default:
        printf("default\n");
    break;

    }
    return 0;
}

