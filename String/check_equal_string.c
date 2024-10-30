/*
input -->  arr = Hello   brr = Hello/This
output ->  equal string / not equal string  
*/

#include<stdio.h>
#include<string.h>

int check(char*,char*);
int main(){
    char arr[50]={'\0'};
    char brr[50]={'\0'};

    printf("\n\t\t\t: Here is to check to words are Equal or  Not :\n\n");

    printf("\nEnter the first string : ");
    scanf("%[^\n]",arr);


    printf("\nEnter the second string : ");
    scanf(" %[^\n]",brr);

    int ret = check(arr,brr);

    if(ret==0){
        printf("\n YES! String is Equal ");
    }
    else{
        printf("\n OOPS! String is not Equal ");
    }
    return 0;
}

int check(char *p,char *q){
 while ((*p!='\0')&&(*q!='\0'))
 {
    if(*p!=*q){
        break;
    }
    p++;
    q++;
 }
 if((*p=='\0')&&(*q=='\0')){
    return 0;
 }
 else{
    return -1;
 }
 
 
}