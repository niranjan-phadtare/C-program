//    DTNAMIC MEMORY ALLOCATION

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char *p=NULL;
    int n=10;

    p=(char*)malloc(n*sizeof(char));
   
    printf("Enter the city name : ");
    scanf("%[^\n]",p);
    printf("\n%s",p);
    return 0;
}

//  STATIC MEMORY ALLOCATION

/*
#include<stdio.h>
#include<string.h>
int main(){
    char arr[50]={'\0'};
    printf("Enter the city name : ");
    scanf("%[^\n]",&arr);
    printf("\n%s",arr);
    return 0;
}*/