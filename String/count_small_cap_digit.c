/*

  input --> NiR5anJa3n
  output -> small letter = 5 capital letter = 3 digit count = 2

*/

#include<string.h>
#include<stdio.h>

void count(char*,int*,int*,int*);

int main(){
    char arr[50]={'\0'};
    int small=0;
    int capital=0;
    int digit = 0;

    printf("\nEnter the string : ");
    scanf("%[^\n]",arr);

   count(arr,&small,&capital,&digit);
   printf("\tSmall = %d \n Capital = %d \n Digit = %d\n ",small,capital,digit);

    return 0;
}

void count(char*p,int*s,int*c,int*d){
   while(*p!='\0'){
   if((*p>='a')&&(*p<='z')){
    *s=(*s)+1;
    }
   else if((*p>='A')&&(*p<='Z')){ 
    *c=(*c)+1;
    }
   else if((*p>='0')&&(*p<='9')){
    *d=(*d)+1;
    }
    p++;
  }
  return ;
}