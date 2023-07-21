#include<stdio.h>
#include<string.h>
int main(){
  int n=100;
  char a[n];
  char goal[n];
   // printf("\n enter the string:");
  gets(a);
    //printf("\n enter the goal:");
  gets(goal);
  int len=strlen(a);
  char b[n];
  int flag;

  char temp;
  for(int i=0;i<len;i++){

    if(i==0){
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    }
    printf("%s",a);

    printf("%s",goal);

    //for(int i=0;i<len;i++){
    if(strequ(a,goal)){
    flag=0;
     }
    else {
   flag=1;
      }
   // }
  printf("\n the result is : ");

  if(flag==0){
    printf("true");
  }
  else {
     printf("false");
  }

}
