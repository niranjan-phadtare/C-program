/*
input --> row = 4    col = 4

1
1       0
1       0       3
1       0       3       0
1       0       3       0       5

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
        if(i>=j){ 
       if(j%2==0){
          printf("0\t");
       }
       else{
        printf("%d\t",j);
       }
    }
   }
    printf("\n");
  }
}