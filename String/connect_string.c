
/*

  input --> arr = Nirajan  brr = Phadtare
  output -> NIranjanPhadtare

*/
#include<stdio.h>
#include<string.h>

void connect(char*,char*);

int main(){
    char arr[50]={'\0'};
    char brr[50]={'\0'};
 
    printf("\nEnter the first string : ");
    scanf("%[^\n]",arr);

    printf("\nEnter the second string : ");
    scanf("  %[^\n]",brr);

    connect(arr,brr);
    printf("\n-----------------------------");
    printf("\n\nConcatede string : %s\t\n\n",arr);
    return 0;
}

void connect(char*p,char*q){ 
    if(p==NULL){
        return;
    }
     if(q==NULL){
        return;
    }
    while(*p!='\0'){
        p++;
    }
    
    while(*q!='\0'){
        *p=(*q);
        p++;
        q++;
    }
}