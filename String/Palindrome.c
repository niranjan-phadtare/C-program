/*

CHECK  PALINDROME 
input --> madam / teacher
output -> YES / NO

*/

#include<stdio.h>
#include<string.h>

int palindrome(char*);

int main(){
 char arr[50]={'\0'};

 printf("\nEnter the string : ");
 scanf("%[^\n]",arr);

 int ret = palindrome(arr);
 if(ret==0){
    printf("\nYES! The string is Palindrome ");
 }  
 else{
    printf("\nOOPS! String is not a palindrome ");
 }
 return 0;
}

int palindrome(char*p){
   
    char *temp=NULL;
    temp=p;
    while(*temp!='\0'){
        temp++;
    }
    temp--;
   while (p<=temp){
    if(*p!=*temp){
        break;
    }
     p++;
     temp--;
   }
   if(p<temp){
    return -1;
   }
   else{
    return 0;
   }
