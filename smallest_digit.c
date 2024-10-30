#include<stdio.h>
int main(){
    int max=0,rem=0,n=0;
    printf("\nenter the number : ");
    scanf("%d",&n);
    int min=n%10;
    while(n!=0){
        rem=n%10;
        if(min>rem){
            min=rem;
        }
        n=n/10;
    }
    printf("%d",min);
    return 0;
}