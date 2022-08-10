#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u\n ",ptr); // Size of ptr here is : 6422296
    ptr++;
    printf("ptr = %u\n ",ptr); // Size of ptr here is : 6422300 --> size of ptr incremented by 4
    return 0;
}