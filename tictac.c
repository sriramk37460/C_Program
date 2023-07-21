#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,n,flag=1,flag1=1;
    char a[50];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
     for(j=i+1;j<strlen(a);j++) {
            if(a[i]==a[j])
        {
           n=j;
           flag=0;
        }
        if(flag==0){
            flag1=0;
            break;
        }
     }


    }
    puts(a);

}
