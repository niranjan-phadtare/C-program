/*input --> 5
 output --> 120 (5*4*3*2*1)
 */
#include<stdio.h>
int main(){
    int i=0,j=0,fact=1;
    int n;
    printf("Enter the number for factorial number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i; 
    }
    printf("%d",fact);
    return 0;
}