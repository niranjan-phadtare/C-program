#include<stdio.h>
#include<stdlib.h>
int main(){
     int ***p=NULL;
     int row=0,col=0,d=0,i=0,j=0,k=0;
    printf("\nEnter the row : ");
    scanf("%d",&row);
    
    printf("\nEnter the column : ");
    scanf("%d",&col);

    printf("\nEnter the no. of 2D array : ");
    scanf("%d",&d);

    p=(int***)malloc(d*sizeof(int));
    for( k=1;k<=d;i++){
      p[k]=(int**)malloc(row*sizeof(int));
    }
     for( k=1;k<=d;i++){ 
       for( i=1;i<=row;i++){
        p[k][i]=(int*)malloc(col*sizeof(int));
    
       }
    }

    printf("\nEnter the Elements : ");

    for( k=1;k<=d;i++){ 
      for( i=1;i<=row;i++){
        for( j=1;j<=col;j++){
            scanf(" %d",&p[k][i][j]);
        }
      }
    }
    
    for(k=1;k<=d;i++){ 
       for( i=1;i<=row;i++){
        for(j=1;j<=col;j++){
           printf(" %d\t",p[k][i][j]);
        }
       }
    }

    for(k=1;k<=d;i++){ 
     for(i=1;i<=row;i++){
        free(p[k][i]);
     }
    }

    free(p);
    
    return 0;
}