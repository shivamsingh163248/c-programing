#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,arr[10],sum=0;
    float mean=0.0;
    printf("enter the size of element \n");
    scanf("%d",&n);
    printf("enter the element are\n");
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d]=",i);
        scanf("%d",&arr[i]);

    }
    printf("\n the input element dislpaly");
    for(i=0;i<n;i++)
    {
        printf("\t%d",arr[i]);
    }
    printf("\nthe avargaae element of the input element\n");
    for(i=0;i<n;i++)
    {
        sum += arr[i];
        
    }
    mean = (float)sum/n; 
    printf("the sum of the elemet of the arry %d\n" ,sum);
    printf("the avarge of the element are %.2f",mean);
     
}