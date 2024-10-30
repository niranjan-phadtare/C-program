#include<stdio.h>
int main(){
    int prev=0,next=1,i=0,j=0,sum=0;
    printf("Enter the fibonaccie series : ");
    scanf("%d",&j);
    printf("%d\t%d\t",prev,next);
    for(i=1;i<=5;i++){
       sum=prev+next;
       printf("%d\t",sum);
       prev=next;
       next=sum;
    }
    return 0;

}