
//BUBBLE SORT:
#include<stdio.h>
int main()
{
int n,i,j,a[10],temp; 
printf("Enter number of array elements : \n");
scanf("%d",&n);
printf("Enter the array elements \n");
for(i = 0 ; i < n ; i++) scanf("%d",&a[i]);
printf("The original elements are : \n");
for(i = 0 ; i < n ; i++)
printf("%d \t",a[i]);
for(i= 0 ; i < n-1 ; i++) 
{
for(j= 0 ; j< n-i-1; j++)
if(a[j] > a[j+1]) 
{
temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
}
}
printf("\n The Sorted elements are : \n");
for(i = 0 ; i < n ; i++) printf("%d \t ",a[i]);
return 0;
}
