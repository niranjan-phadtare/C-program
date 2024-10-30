/*
input --> row = 3    col = 3

1 2 3
4 5 6
7 8 9

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
        printf("%d",k);
        k++;
    }
    printf("\n");
  }
}