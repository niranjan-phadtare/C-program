#include<stdio.h>
int main(){
    int rem=0,sum=0,n=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        sum=sum+n;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
    
}