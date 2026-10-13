//enter first student marks
//maths subject marks=40
//python subject marks=50
//DBMS subject marks=60
//enter 3 students marks 
// sno  maths  python DBMS total % result
// 1    40     50     60   150  75.00  pass
#include<stdio.h>
int main()
{
    int sno, maths, python, dbms, total;
    float percentage;
    char result[10];
    printf("enter student number:");
    scanf("%d", &sno);
    printf("enter maths marks:");
    scanf("%d", &maths);
    printf("enter python marks:");
    scanf("%d", &python);
    printf("enter DBMS marks:");
    scanf("%d", &dbms);
    total = maths + python + dbms;
    
    printf("Student Number: %d\n", sno);
    printf("Maths: %d\n", maths);
    printf("Python: %d\n", python);
    printf("DBMS: %d\n", dbms);
    printf("Total: %d\n", total);
    percentage = (float)total / 3;
    printf("Percentage: %.2f\n", percentage);
    
    if (percentage >= 50){
        printf("Result: %s\n", "pass");
    }
    else{
        printf("Result: %s\n", "fail");
    }
    return 0;
}
