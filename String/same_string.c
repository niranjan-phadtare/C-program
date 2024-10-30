/*

  input -->  arr = Hello   brr = Hello 
  output -> equal

*/

#include<stdio.h>
#include<string.h>

void same(char*,char*);

int main(){
    char arr[50]={'\0'};
    char brr[50]={'\0'};

    printf("\nEnter the first string : ");
    scanf("%[^\n]",arr);

    printf("\nEnter the second string : ");
    scanf("  %[^\n]",brr);

    same(arr,brr);
    return 0;
}

void same(char*p,char*q){
    int n=strlen(p);
    while(*p!='\0'){
        for(int i=0;i<n;i++){ 
        if(p[i]==q[i]){ 
         printf("\nequal");
        }
        else{
            printf("\nnot equal");
        }
     }
    }
}