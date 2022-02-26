#include<stdio.h>
#include<conio.h>
void main()
{
    int i ,n ;
    int arr[20];
    printf("enter the size of the element ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the frist element %d = ",i);
        scanf("%d", &arr[i]);
    }
     for(i=0;i<n;i++)
    {
        printf("\t display the element = %d  ", arr[i]);
        

      
    }
 
}