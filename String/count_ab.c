/*
 input --> dJHIHab;ldjHab  char = 'a' char = b (find occurance of ab )
  output -> 2
*/

#include<stdio.h>
#include<string.h>

int count(char*,char,char);

int main(){
    char arr[50]={'\0'};
    char a='\0';
    char b='\0';

    printf("\nEnter the string : ");
    scanf("%[^\n]",arr);

    printf("\nEnter the first charachter : ");
    scanf(" %c",&a);

    printf("\nEnter the second charachter : ");
    scanf(" %c",&b);

    int ret = count(arr,a,b);

    printf("\nOccuranace is : %d",ret);

    return 0;
}

int count(char *p,char c,char h){
    int i=0;
    while(*p!='\0'){
        if((*p==c)&&(*(p+1)==h)){

            i++;
        }
        p++;
    }
    return i;
}