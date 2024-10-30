/*
input --> row = 3    col = 3

* * *
* * *
* * *

*/

#include<stdio.h>
void pattern(int,int);
int main(){
    int row=0,col=0;
    printf("\nEnter the row : ");
    scanf("%d",&row);

    printf("\nEnter the column : ");
    scanf("%d",&col);

    pattern(row,col);

    return 0;
}
void pattern(int x,int y){
  int i=0,j=0;
  for(i=0;i<x;i++){
    for(j=0;j<y;j++){
        printf("*");
    }
    printf("\n");
  }
}