#include<stdio.h>
int main(){
    int i=0,j=0;
    printf("Enter the number to print its Multiplication table : ");
    scanf("%d",&j);
    for(i=1;i<11;i++){
        int m=j*i;
        printf("%d * %d = %d\n",j,i,m);
    }
    return 0;
}