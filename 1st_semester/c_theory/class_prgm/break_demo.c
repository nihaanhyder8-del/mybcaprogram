#include<stdio.h>
int main(){

    for(int j=0;j<5;j++){
        printf("loop started\n");
        for(int i=0;i<5;i++){
            printf("inner loop started");
        break;
        printf("from inner loop\n");

        }
        printf("from outer the loop\n");
        break;
    }
    printf("program terminated..\n");
}