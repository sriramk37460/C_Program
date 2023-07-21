#include<stdio.h>
int main(){
    char ch[]="";
    scanf("%s",ch);
  //  printf("%s",ch);
    int i,j,k,digit,temp=0,count=0;

    for(i=0;ch[i]!='\0';i++){
        count++;
    }
   int n[count];
   for(i=0;i<count;i++){
    n[i]=(int)(ch[i]-48);

   }
   for(i=0;i<count-2;i++){
        j=i+1;
        k=i+2;
        digit=(n[i]*100)+(n[j]*10)+(n[k]);
        if((temp<digit)) //&& (digit%2==1))
            {
            temp=digit;
        }
        else if((temp>digit)) //&& (digit%2==1))

        {
            temp=temp;
        }
   }

  printf("%d\n",count);
  printf("%d",digit);
return 0;
}
