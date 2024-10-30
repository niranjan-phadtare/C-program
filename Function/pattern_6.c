/*
input --> 12
output --> 1 * 2 * 3 * 4 * 5 * 6
*/

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
    int j=1;
    for(int i=1;i<=n;i++){
    if(i%2==0){
        printf("*");
    }
    else{
        printf("%d",j);
        j++;
    }
  }
}