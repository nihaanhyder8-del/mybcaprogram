#include<stdio.h>
int main(){
    int choice=0;
    int accountno=1000;
    float deposit;
    float withdraw;
    float total;
    float remaining;
    float balance= 500;
    int i=1;
      
    while(i==1){
    printf("----------\n");
    printf("------welcome to bank account------\n");
    printf("1. deposit\n");
    printf("2. withdraw\n");
    printf("3. account view\n");
    printf("4. exit\n");
    
    printf("enter your choice");
    scanf("%d",&choice);
    
    if(choice==1){
        printf("enter the amount of deposit");
        scanf("%f", &deposit);
        total=balance+deposit;
        printf("the total amount in account is=%.2f\n",total);
        printf("--------------------------------end---------------------------");
    }
    if(choice==2){
        printf("enter the amount of withdraw\n");
        scanf("%f" ,&withdraw);
        remaining=balance-withdraw;
        printf("the remaining balance in account is=%.2f\n",remaining);
        printf("--------------------------------end---------------------------");
    }
    if(choice==3){
        printf("your account details\n");
        printf("the accountno is:%d\n",accountno);
        printf("the balance is:%.2f\n",balance);
        printf("--------------------------------end---------------------------");
    }
    }
    if(choice==4){
        printf("exit");
    }
}
