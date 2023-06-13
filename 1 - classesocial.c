#include <stdio.h>

int main(){
   
   int num1,num2,soma =0;
   scanf("%d %d",&num1,&num2);
   
   for(int i = num1;i <= num2;i++){
   	
   	if(i % 2 != 0){
   		soma += i;
	   }
   }
   printf("%d",soma);
   
   
    return 0;
}