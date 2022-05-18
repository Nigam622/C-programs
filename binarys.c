#include<stdio.h>
int main()
{   //BINARY SEARCH:
    
int a[30],i,num,key,low,mid,high;
printf("\n Enter the Number of Elements");
scanf("%d",&num); 
printf("\n Enter the Elements in Sorted Order : ");
for(i=0;i<num ;i++) scanf("%d", &a[i]);
printf("\n Enter the key element to be searched\n");
scanf("%d", &key); 
low=0; 
high=num-1; 
while(low<=high)
{
mid=(low + high)/2; 
if(a[mid]==key)
{
printf("element %d is found at %d position:",key,mid+1);
exit(0); 
}
else if(a[mid]>key)
high=mid-1;
else low=mid+1;
}
printf("UNSUCCESSFULL SEARCH\n");
return 0;
}
