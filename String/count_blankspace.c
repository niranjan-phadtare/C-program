#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int countBlankspace(char*);

int main(){
    char arr[70];

    printf("\n Enter the string : ");
    scanf("%[^\n]",arr);

    int ret = countBlankspace(arr);
    printf("\nNUmber of blankspace : %d ",ret);
    return 0;
}

int countBlankspace(char*p){
    int i=0;
    while(*p!='\0'){
        if(*p==' '){
            i++;
        }
        p++;
    }
    return i;
}