#include<stdio.h>
void pattern(int);
int main(){
   int n=0;
   printf("\nenter the number : ");
   scanf("%d",&n);
   pattern(n);
   return 0;
}
void pattern(int n){
    int i=0;
    for(i=-n;i<=n;i++){
printf("%d\t",i);
    }
}