#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int count(char*);

int main(){
    char arr[60];

    printf("\nEnter the string : ");
    scanf("%[^\n]",arr);

    int ret=count(arr);
    printf("\nNumber of charachters are : %d",ret);
    return 0;
}

int count(char *p){
    int i=0;
   while(*p!='\0'){
       i++;
       p++;
    }

    return i;
}