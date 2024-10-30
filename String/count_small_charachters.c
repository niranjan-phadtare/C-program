
/*
 input --> Nirajan  (find small charchters in the given string )
  output -> 7
*/

#include<string.h>
#include<stdio.h>

int count(char*);

int main(){
    char arr[50]={'\0'};

    printf("\nEnter the string : ");
    scanf("%[^\n]",arr);

    int ret=count(arr);
    printf("Number of small charachters : %d",ret);

    return 0;
}

int count(char*p){
    int i=0;
    while(*p!='\0'){
        if(*p>='a'&&*p<='z'){
          i++;
        }
        p++;
    }
    return i;
}