 /*
input --> row = 4    col = 4

* 

* * 

* * * 

* * * *

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
          printf("*\t");
       }
       else{
        printf("\t");
       }
    }
    printf("\n");
  }
}