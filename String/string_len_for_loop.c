// return string length using for loop without loop body

#include<stdio.h>
#include<string.h>

int length(char*);

int main(){
    char arr[50]={'\0'};
    printf("\nEnter the string : ");
    scanf("%[^n]",arr);
    int ret = length(arr);
    printf("Length of string is : %d",ret);
    return 0;
}
int length(char*p){
    for (int i = 0; *p!='\0'; p++,i++)
    return i;
}