#include<stdio.h>
#include<conio.h>


char str[100],pat[100],rep[100],ans[100];

void read()
{
 printf("Enter the string:");
 fgets(str,20,stdin);
 printf("\n");
 printf("Enter the patter string:");
 scanf(" %s",pat);
 printf("\n");
 printf("Enter the replacement string:");
 scanf(" %s",rep);
}


void pat_match()
{
    int i,j,c,m,k;
    int flag=0;
    i=m=c=j=0;

    while(str[c]!='\0')
    {
        if(str[m] == pat[i])//Pattern matching
        {
            i++;
            m++;
            if(pat[i]=='\0')
            {
                printf("\n pat:%s is found at position %d",pat,c);
                for(k=0;rep[k]!='\0';k++,j++)
                ans[j]=rep[k];
                i=0;
                c=m;
                flag=1;
            }
        }
        
        else //pattern mismatch
        {
            ans[j]=str[c];
            j++;
            c++;
            m=c;
            i=0;
        }
    }
    
    ans[j]='\0';
    if(flag==0)
        printf("\n PAT:%s is not found in STR:%s",pat,str);
    else
        printf("\n The resulting string is: %s",ans);

}


void main()
{
    read();
    pat_match();
}

