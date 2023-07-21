#include<stdio.h>

int main(){
  int n;
  printf("\n enter the size: ");
  scanf("%d",&n);
  int a[n];
  int b,count=0,count1=0;
  printf("\n enter the bill: ");
  scanf("%d",&b);
 printf("\n enter the array element: ");

  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]==b){
        count++;
     }

  }
  int k=0,r;
  for(int i=0;i<n;i++){
    label:
     if(a[i]!=b){
       r=a[i]-b;

       if(r==b){
         a[i]=0;
       }
       else{
           a[i]=r;
       // printf("%d",r);
       goto label;
       }
        a[k]=0;
        k++;
     }
    // printf("%d",a[i]);
  }
 // printf("%d",count);

}
