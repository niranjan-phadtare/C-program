/*
 input --> Hello World    n = 9
  output -> Hello Wor (in another string)
*/

#include<stdio.h>
#include<string.h>

void cpoyxstring(char*,char*,int);

int main(){
    int n=0;
    char arr[50]={'\0'};
    char brr[50]={'\0'};
    
     printf("\nEnter the string  : " );
     scanf("%[^\n]",arr);
     
     printf("\nEnter the digit : ");
     scanf(" %d",&n);

     cpoyxstring(arr,brr,n);
     printf("%s",brr);
    return 0;
}

void cpoyxstring(char*p,char*q,int n){
   int i=0;
   while(*p!='\0'&&n!=0){
     
       *q=(*p);
       p++;
       q++;
       n--;
    }
}
