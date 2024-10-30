/*
 Design a structure for attendance of the student of each subject with name and 
 find average of the student's attendance 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma pack(4)
#include<stdio.h>
#define size 10
struct demo{
  float arr[size];
};
struct demo obj;
int main(){
float sum=0.0f, avg=0.0f;
char name[20];
printf("\n\tEnter the name of the Student : ");
scanf("%[^\n]",name);

    printf("\n\n\tEnter the attendance for  10 subject \n");

    printf("\n\tKotlin : ");  //1
    scanf("%f",&obj.arr[0]);

    printf("\n\tData Structure Theory : ");  //2
    scanf("%f",&obj.arr[1]);

    printf("\n\tData Structure Lab : ");  //3
    scanf("%f",&obj.arr[2]);

    printf("\n\tCOA : "); //4
    scanf("\n\t%f",&obj.arr[3]);
     
   printf("\n\tJAVA : "); //5
    scanf("%f",&obj.arr[4]);

   printf("\n\tData Science Lab : "); //6
    scanf("%f",&obj.arr[5]);

   printf("\n\tBuisness Studies : "); //7
   scanf("%f",&obj.arr[6]);
   
   printf("\n\tMDM : "); //8
    scanf("%f",&obj.arr[7]); 

    printf("\n\tData Analysis Using R : "); //9
    scanf("%f",&obj.arr[8]);

    printf("\n\tUHV : "); //10
    scanf("%f",&obj.arr[9]);

    for(int i=0;i<10;i++){
       sum=obj.arr[i]+sum; 
    }
    avg=sum/10;
    printf("\n\tName of the Student : %s",name);
    printf("\n\tOverall attendance of %s is : %.2f",name,avg);

    if(obj.arr[0]<75.00){
      printf("\n\n\tAlert ! your Kotlin subject is going below 75%%\n\n");
    }
    else if(obj.arr[1]<75.00){
      printf("\n\n\tAlert ! your Data Structure Theory subject is going below 75%%\n\n");
    }
     else if(obj.arr[2]<75.00){
      printf("\n\n\tAlert ! your Data Structure Lab subject is going below 75%%\n\n");
    }
     else if(obj.arr[3]<75.00){
      printf("\n\n\tAlert ! your COA subject is going below 75%%\n\n");
    }
     else if(obj.arr[4]<75.00){
      printf("\n\n\tAlert ! your JAVA subject is going below 75%%\n\n");
    }
     else if(obj.arr[5]<75.00){
      printf("\n\n\tAlert ! your Data Science Lab subject is going below 75%%\n\n");
    }
     else if(obj.arr[6]<75.00){
      printf("\n\n\tAlert ! your Buisness Studies subject is going below 75%%\n\n");
    }
     else if(obj.arr[7]<75.00){
      printf("\n\n\tAlert ! your MDM subject is going below 75%%\n\n");
    }
     else if(obj.arr[8]<75.00){
      printf("\n\n\tAlert ! your Data Analysis Using R subject is going below 75%%\n\n");
    }
     else if(obj.arr[9]<75.00){
      printf("\n\n\tAlert ! your UHV subject is going below 75%%\n\n");
    }
    else{
      printf("\nKeep it up !! your all subject attendance is above 75%%\n\n");
    }
   
    return 0;
}