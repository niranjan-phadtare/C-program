/*
 input --> Nirajan  char = 'a' (find at which position a is present in the given string )
  output -> 4
*/

#include<stdio.h>
#include<string.h>

int position(const char*,char);

int main(){
    char arr[50]={'\0'};
    char ch='\0';

    printf("\n Enter the string : ");
    scanf("%[^\n]",arr);
     printf("ch : ");
    scanf(" %c",&ch);
   

    int ret = position(arr,ch);
    printf("\nPosition of the charachter is at %d",ret);
    return 0;
}

int position(const char *p,char c){
    int i=1,occ=0;
    while(*p!='\0'){
        if(*p==c){
        return i;
        }
        i++;
        p++;
    }
    return 0;
}
