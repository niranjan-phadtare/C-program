#include<stdio.h>
void pattern(int);
int main(){
    int n=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}
void pattern(int n){
    int i=0;
    for(i=1;i<=n;i++){
    
        if(i%2==0){
            printf("*\t");
        }
        else{
            printf("%d\t",i);
        }
    }
}