#include<stdio.h>

int main(){
    int a = 3;
    int b =5;

     printf("Value of a and b before Swapping is a = %d b= %d\n",a,b);

    int *ptr1 = &a;
    int *ptr2 = &b;
    int temp=0;

    temp = *ptr1;
    *ptr1 =*ptr2;
    *ptr2 = temp;

    printf("Value of a and b after Swapping is a = %d b= %d",a,b);
    
        return 0;
}