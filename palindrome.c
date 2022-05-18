
#include<stdio.h>
int main()
{   //PALINDROME:

int n,rev=0,num, remainder ;
printf("Enter the number\n");
scanf("%d",&num); 
n=num;
while(num!=0) 
{ remainder = num%10; 
num = num/10; 
rev = rev*10+ remainder;
}
printf("The reverse number is %d",rev);
if(rev == n) 
printf("\n %d is a palindrome",n);
else
printf("\n %d is not a palindrome",n);
return 0;
}

