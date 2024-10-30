/*
input --> Niranjan  n = 5
output --> najna (copy in other string)
*/

#include<stdio.h>
#include<string.h>

void copystring(char*,char*,int);

int main(){
    int n=0;
    char arr[50]={'\0'};
    char brr[50]={'\0'};

    printf("\nEnter the string : ");
    scanf("%[^\n]",arr);

    printf("\nEnter the digit : ");
    scanf("%d",&n);
    
    copystring(arr,brr,n);

    printf("%s",brr);

    return 0;
}

void copystring(char *p , char *q ,int n ){
    int i=0;
    if(p==NULL){
        return;
    }
       if(q==NULL){
        return;
    }
    int temp=strlen(p);
    p=p+temp-1;
  while(n!=0){
     *q=(*p);
     p--;
     q++;
     n--;
   }
}
