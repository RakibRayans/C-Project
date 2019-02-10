#include<stdio.h>
int main()
{
    int n,i,beg,mid,end,loc,iteam;
    printf("How many number u want to enterned ? ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
     scanf("%d",&a[n]);
     printf("Enter the iteam which u want to search:");
     scanf("%d",&iteam);

    beg=0,end=n,mid=((beg+end)/2);
    while(beg<=end && a[mid]!=iteam){
        if(iteam<a[mid])
            end=mid-1;
        else
            beg=mid+1;


     mid=((beg+end)/2);
     }

    if(loc==-1)
    {
        printf("The iteam is not found.");
    }
    else if(a[mid]==iteam){

        printf("The location of the iteam is: %d",loc);
    }
    //printf("The location of the iteam is: %d",loc);

        //printf("The iteam is not found.");
    return 0;

}
