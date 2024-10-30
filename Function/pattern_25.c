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
    int i=0,j=0;
    for(i=1;i<=n;i++){
        printf("%d\t",i);
        for(j=1;j<=i;j++){
            printf("*\t");
        }
    }
}