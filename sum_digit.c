

#include<stdio.h>
int main(){
     int final=0;
    int rem=0,sum=0,n=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n>9){ 
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d\t\n",sum);
      n=sum;
        sum=0;
    }
    return 0;
    
}
