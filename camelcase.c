#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,n;
    char a[50];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(i==0)
        {
            n=(int)a[i]-32;
           // a[i]=toupper(a[i]);
           a[i]=(char)n;
        }
        if(a[i]==' ')
        {
            n=(int)a[i+1]-32;
           // a[i+1]=toupper(a[i+1]);
           a[i+1]=(char)n;
        }
    }
    puts(a);

}
