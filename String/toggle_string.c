/*
input --> Hello World   
output --> hELLO wORLD
*/

#include<stdio.h>
#include<string.h>

void toggle(char*);

int main(){
    char arr[50]={'\0'};

    printf("\nEnter the string : ");
    scanf("%[^\n]",arr);

    toggle(arr);
 printf("%s",arr);  
    return 0;
}
void toggle(char*p){
    while(*p!='\0'){
        if(*p>='a'&&*p<='z'){
           *p=*p-32;
        }
        else if(*p>='A'&&*p<='Z'){
            *p=*p+32;
        }
        p++;
    }
     
}