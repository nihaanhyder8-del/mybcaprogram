#include<stdio.h>
int rollno;
int sub1,sub2,sub3,sub4,sub5;
int sum;
float avg,cgpa;
void get_student_data(){
    printf("enter the roll number:");
    scanf("%d",&rollno);
    printf("mark of subject1:");
    scanf("%d",&sub1);
    printf("mark of subject2:");
    scanf("%d",&sub2);
    printf("mark of subject3:");
    scanf("%d",&sub3);
    printf("mark of subject4:");
    scanf("%d",&sub4);
    printf("mark of subject5:");
    scanf("%d",&sub5);
}
int get_total(){
    sum=sub1+sub2+sub3+sub4+sub5;
    printf("TOTAL MARKS%d\n",sum);
}
float get_average(){
    avg=sum / 5;
    printf("AVERAGE MARKS:%d\n",avg);
}
float get_cgpa(){
    cgpa=avg/9.5;
    printf("CGPS:%d\n",cgpa);
}
void display_student_data(){
    printf("ROLL NO:%d\n",rollno);
}

int main(){
    //declaration
    //user defined functions
    get_student_data();
    get_total();
    get_average();
    get_cgpa();
    display_student_data();
}