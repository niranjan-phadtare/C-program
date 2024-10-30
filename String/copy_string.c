/*
input --> Hello World 
output -> Hello World (in another string)
*/
#include<stdio.h>
#include<string.h>

void copyXstring(char*,char*);

int main(){
    char arr[50]={'\0'};
    char brr[50]={'\0'};

    printf("\nEnter the string : ");
    scanf("%[^\n]",arr);

    copyXstring(arr,brr);

    printf("Copy :  %s",brr);

    return 0;
}

void copyXstring(char*p,char*q){
    while(*p!='\0'){
        *q=*p;
        q++;
        p++;
    }
}