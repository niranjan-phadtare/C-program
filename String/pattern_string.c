#include<stdio.h>
#include<string.h>

void pattern(char*);
int main(){
    char arr[10]={'\0'};
    printf("Enter the string : ");
    scanf("%[^\n]",arr);
    pattern(arr);
    return 0;
}
void pattern(char*p){
    int i=0;
    int j=0;
    for ( i = 0; *(p+i)!='\0'; i++)
    {
      for (j = 0; j <= i; j++)
      {
        
        printf("%c\t",*(p+j));
      }
      printf("\t\n\n");
      
    }
    
}