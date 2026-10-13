#include<stdio.h>
int main(){
    int number=0;
    int sum=0;
    int i=5;
    printf("enter the number:");
    scanf("%d",&number);

    if(number>5){
        for (int i=5; i<=number;i=i+1){
            sum=sum+i;
        }
        printf("sum of number from 5 to %d is %d\n",number,sum);
    }
    else{
        printf("enter the number greater than 5\n");
    }


}