#include<stdio.h>
void pattern(int);
int main(){
    int n=0;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}
void pattern(int n){
    for(int i=1;i<=n;i++){
     printf("%d\t",i);
    }
}