#include<stdio.h>
#include<string.h>
#pragma pack(4)
typedef struct {
    int roll_number;
    char name[20];
    char address[50];
    int marks[5];
    int avg;
}s;
void display(s student);
int main(){
    s student;
    student.roll_number=78;
    strcpy(student.name,"Niranjan");
    strcpy(student.address,"Runal's Royal Casa, Ravet,Pune 412101");
    student.marks[0]=67;
    student.marks[1]=97;
    student.marks[2]=87;
    student.marks[3]=47;
    student.marks[4]=57;
    
    display(student);
    return 0;
}

void display(s student){
    printf("\nRoll Number of the student is : %d\n",student.roll_number);
    printf("\nName of the stuent is : %s\n",student.name);
    printf("\nAddress of the Student is : %s\n",student.address);
    printf("\nMarks of each subject : %d %d %d %d %d\n",student.marks[0],student.marks[1],student.marks[2],student.marks[3],student.marks[4]);

   int i=0;
    int sum=0;
    int j=0;
    for(i=0;i<5;i++){
        sum=student.marks[i]+sum;
        i++;
    }
    student.avg=sum/5;
    printf("\nAverage of the student is : %d\n",student.avg);
}