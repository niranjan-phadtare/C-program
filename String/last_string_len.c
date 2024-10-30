/*
input --> Fly above the moon
output -> 4 (strlenof(moon))
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int string(char*);
int main(){
    char *p=NULL;
    p=(char*)malloc(20*sizeof(char));
    printf("\nEnter the string : ");
    scanf("%[^\n]",p);
    int ret=string(p);
    printf("\nLength of last string is : %d ",ret);
    return 0;
}
int string(char*p){
    int i=0;
    while(*p!='\0'){
        p++;
    }
    p--;
    while(*p==' '){ 
        
        p--;
    }
    while(*p!=' '){
        i++;
        p--;
    }
    return i;
}

