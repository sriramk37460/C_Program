#include<stdio.h>
int main(){
int n,k,j,digit,temp=0;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<n-2;i++){
    j=i+1;
    k=i+2;
    digit=(a[i]*100)+(a[j]*10)+(a[k]);
    if(temp<=digit){
        temp=digit;
    }
    else{
        temp=temp;
    }
}
printf("%d",temp);
}
