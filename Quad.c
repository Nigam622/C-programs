  #include <stdio.h>
  #include <math.h>
  #include <stdlib.h>

  float a,b,c,D;
  float root1,root2,real,imag;
  //Reading the variables from the user:
  printf("Enter the Value of a,b,c:\n");
  scanf("%f%f%f",&a,&b,&c);
  
  if(a==0,b==0)
  {
      printf("INVALID Coefficients:\n");
      printf("Try again with Valid Inputs!!!");
  }
    else if(a==0)           //Linear equation:
    {  printf("Linear equation:\n");
        root1=-c/b;
      printf("The Root is=%.3f",root1);
    }
    else      //QUADRATIC equation:
    {
        D=b*b-4*a*c;
        if(D==0)  //Real and Equal roots:
        {
            printf("The roots are Equal\n:");
            root1=root2 = -b/(2*a);
            printf("Root1=%.3f and Root2=%.3f",root1,root1);
            
        }
        else if(D>0)  // Real and Distinct roots:
        {
        printf("The roots are Real and Distinct roots:\n");
        root1 = (-b + sqrt(D)/(2*a)); 
        root2 = (-b - sqrt(fabs(D))/(2*a));
         printf("Root1=%.3f and Root2=%.3f",root1,root1);
        }
        else  //Imaginary roots:
        {
            printf("The roots are Real and Imaginary:\n");
           real=-b/(2*a);
           imag=sqrt(D)/(2*a);                       //fabs() returns only number without sign:
            printf("Root1=%.3f +i%.3f\n",real,imag);  
            printf("Root2=%.3f - i%.3f\n",real,imag);
        }
       
        }  
         
