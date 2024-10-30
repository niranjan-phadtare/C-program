#include<stdio.h>
#include<stdlib.h>
int main(){
     int **p=NULL;
     int row=0,col=0;
    printf("\nEnter the row : ");
    scanf("%d",&row);
    
    printf("Enter the column : ");
    scanf("%d",&col);

    p=(int**)malloc(row*sizeof(int));
    for(int i=1;i<=row;i++){
      p[i]=(int*)malloc(col*sizeof(int));
    }
    
    printf("Enter the Elements : ");
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            scanf("%d",&p[i][j]);
        }
    }
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
           printf("Elements are : %d\t",p[i][j]);
        }
    }
    for(int i=1;i<=row;i++){
        free(p[i]);
    }
    free(p);
    return 0;
}