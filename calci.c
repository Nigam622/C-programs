#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
 //SIMPLE CALCULATOR:   
int op1,op2,res; 
char oper;
printf("Enter the operator\n"); 
scanf("%c",&oper);
printf("Enter two operands( Only integers) \n");
scanf("%d%d",&op1,&op2);
switch(oper)
{
case '+': res=op1+op2; 
break;
case '-': res=op1-op2; 
break;
case '*': res=op1*op2; 
break;
case '/': if(op2==0)
{
printf("Divide by zero error");
exit(0); 
}
else
res=op1/op2;
break;
default: printf("Not a valid operator");
exit(0);
}
printf("Result=%d",res); 
}


