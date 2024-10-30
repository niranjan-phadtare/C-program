#include<stdio.h>
int main(){
    int i=0,n=0,rem=0;
    printf("\nEnter the number to check prime or not : ");
    scanf("%d",&n);
    rem=n%2;
   if(rem==0){
    printf("prime");
   }
   else{
    printf("not prime");
   }
    return 0;
}