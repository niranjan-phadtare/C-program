/*
input --> row = 4   col = 4

1 1 1 1 

2 0 0 2

3 0 0 3 

4 4 4 4 
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
  int k=1;
  for(i=1;i<=x;i++){
    for(j=1;j<=y;j++){
       if((i==1)||(j==1)||(i==x)||(j==y)){
          printf("%d\t",i);
       }
       else{
        printf("0\t");
       }
    }
    printf("\n");
  }
}