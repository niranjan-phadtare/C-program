/*
input --> Hello World 
output -> dlroW olleH (in another string)
*/
#include<stdio.h>
#include<string.h>

void copyXstring(char*,char*);

int main(){
    char arr[50]={'\0'};
    char brr[50]={'\0'};

    printf("\nEnter the string : ");
    scanf("%[^\n]",arr);

    copyXstring(arr,brr);

    printf("Copy :  %s",brr);

    return 0;
}

void copyXstring(char*p,char*q){
    /* 
    // 0R //
    char *v=NULL;
    char temp='\0';
    v=p;
    while(*v!='\0'){
        v++;
    }
    v--;
    
    while(v>p){
        temp=(*p);
        *p=(*v);
        *v=temp;
        p++;
        v--;
    }
    
   while(*p!='\0'){
    *q=(*p);
    q++;
    p++;
   }
   */
int n = strlen(p);
p=p+n-1;
while(n!=0){
    *q=(*p);
   q++;
    p--;
    n--;
 }

}

 