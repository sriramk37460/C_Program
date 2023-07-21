#include<stdio.h>

int main(){
  int input,output,rust;
  scanf("input pipe:%d\noutput pipe:%d\nrust factor:%d",&input,&output,&rust);
  int inp[input];
  int out[output];
  int total_of_inp=0;
  int total_of_out=0;
  for(int i=0;i<input;i++){
    scanf("%d",&inp[i]);
    total_of_inp+=inp[i];
  }
  for(int j=0;j<output;j++){
    scanf("%d",&out[j]);
    total_of_out+=out[j];
  }

  if(total_of_inp==total_of_out){
    printf("\nbalanced");
  }
  else if(total_of_inp>total_of_out){
    printf("\n%d",(total_of_out-total_of_inp)-rust);
  }
  else{
        printf("\n%d",(total_of_out-total_of_inp)+rust);

  }
  return 0;
}
