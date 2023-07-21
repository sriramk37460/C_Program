#include<stdio.h>
int main(){
int n;
printf("\nEnter the size:");
scanf("%d",&n);
int arr[n];
int count=0;
for(int i=0;i<n;i++){
        printf("\nEnter the number:");
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            count+=1;
        }
    }
}
printf("\nInversion count is: %d",count);

}
