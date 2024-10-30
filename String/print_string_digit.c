/*
 input --> Hello World    n = 9
  output -> Hello Wor 
*/

#include<stdio.h>
#include<string.h>

void print(char*,int);

int main(){
    int num=0;
    char arr[50]={ '\0'};
    
    printf("\nEnter the string : ");
    scanf("%[^\n]",arr);

    printf("\nEnter the number : ");
    scanf("%d",&num);

    print(arr,num);
    return 0;
}

void print(char*p,int n){
    int i=0;
    while(*p!='\0'){
        if(i<n){
           printf("%c",*p);
        }
        i++;
        p++;
    }
}