#include<stdio.h>

int max(int* a,int* b);

int main(){
    
    // Write a program in C to find the maximum number between two numbers using a pointer.

      int a = 6;
      int b =8;

      printf("The max of a and b is : %d ",max(&a,&b));
    

    return 0;
}

int max(int* a,int*b) {

    int max =0;

    if(*a > *b)
        return *a;
    else 
        return *b;
}