#include<stdio.h>
int main(){
    int max=0,rem=0,n=0;
    printf("\nenter the number : ");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        if(max<rem){
            max=rem;
        }
        n=n/10;
    }
    printf("%d",max);
    return 0;
}