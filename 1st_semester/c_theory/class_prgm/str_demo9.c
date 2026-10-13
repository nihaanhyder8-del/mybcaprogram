#include<stdio.h>
int main(void){  
    char word[]="program";
    char name[30]="ravi  kumar";
    printf("hello,[ %s]\n",name);
    for (int i=0; word[i]!='\0';i++){
        printf("word[%d]=%c\n",i,word[i]);
    }
}
