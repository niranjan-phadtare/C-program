#include<stdio.h>
#pragma pack(1)
struct demo {
    int i;
    char ch;
    float f;
    double d;
}obj;
int main(){
    printf("%lu",sizeof(struct demo));
    return 0;
}