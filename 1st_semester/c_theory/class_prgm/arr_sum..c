#include<stdio.h>
int main(){
    int arraysize;
    int arraySize=read_array_size();
    int isValid=validate_array_size(arraySize);
    while (isValid==1)
    {
        int arraySize=read_array_size();
        int Validated=validate_array_size(arraySize);
        if(Validated==1){
            
            break;
        }
        printf("plss re try");
    }
    for (int i=0;i<arraySize;i++);
    
}

//reads array SIZE from KB
int read_array_size(){
    int size; //local variable
    printf("enter the array size[>4]:");
    scanf("%d",&size);
    return size;
}

int validate_array_size(int array_size){
    if (array_size>4)
    {
        return 1;
    }
    return 0;

}