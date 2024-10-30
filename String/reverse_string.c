/*
input --> Niranjan  
output --> najnariN
*/

#include<stdio.h>
#include<string.h>

void reverse(char*);

int main(){
    char arr[50]={'\0'};

    printf("\nEnter the the string : ");
    scanf("%[^\n]",arr);

    reverse(arr);
printf("%s",arr);
    return 0;
}

void reverse(char*p){
 char *q=NULL;
 char temp='\0';
 int i=0;
 q=p;
    while(*q!='\0'){
        q++;
    }
    q--;
    while(q>p){
        temp=(*p);
       *p=(*q);
       *q=temp;
       p++;
       q--;
    }
    
}