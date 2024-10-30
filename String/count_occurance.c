/*
 input --> Nirajan  char = 'a'
  output -> 2 
*/


#include<stdio.h>
#include<string.h>

int occurance(char*,char);
int main(){ 
    char arr[50]={'\0'};
    char ch='\0';

    printf("\nEnter the string : ");
    scanf("%[^\n]",arr);
    
    printf("\nEnter the charachter : ");
    scanf("%c",&ch);

    int ret=occurance(arr,ch);
    printf("Occurance of the charachter %c is %d",ch,ret);
    return 0;
}
int occurance(char *p,char ch){
    int i=0;
    while(*p!='\0'){
        if(*p==ch){
            i++;
        }
        p++;
    }
    return i;
}