#include<stdio.h>
int main()
{
    int a[100],n,j,i,sum=0,per;
    printf("how many sub. ?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum+a[i];
    }
    for(j=0;j<n;j++)
    {
        printf("subjects numb. are : %d\n",a[j]);
    }
    printf("sum = %d\n",sum);
    per = (sum*100)/(n*100);
    printf("Percentage is : %d percent \n",per);
    return 0;
}

