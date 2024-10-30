 /*
input --> row = 4    col = 4
*       *       *       *
*       *       *
*       *
*

*/
#include<stdio.h>
void pattern(int);
int main(){
    int row=0,col=0;
    printf("\nEnter the row : ");
    scanf("%d",&row);


    pattern(row);

    return 0;
}
void pattern(int x){
  int i=0,j=0;

  for(i=x;i>=1;i--){
    for(j=1;j<=i;j++){
       
          printf("*\t"); 
    }
    printf("\n");
  }
}