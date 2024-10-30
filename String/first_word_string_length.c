// Bharat is my country  - 6 (return length of first string )

#include<stdio.h>
#include<string.h>

int length(char*);

int main(){
    char arr[50]={'\0'};
    printf("\nString : ");
    scanf("%[^\n]",arr);
    int ret = length(arr);
    printf("%d",ret);
    return 0;
}
int length(char*p){
    int i=0;
    while(*p!='\0'&&*p!=' '){
        i++;
        p++;
    }
    return i;
}