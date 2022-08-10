#include<stdio.h>

void _square(int* ptr);

int main(){

    int number = 4;
    _square(&number);

    printf("Square is %d",number);
    
    return 0;
}

void _square (int* n) {

    *n  = (*n) * (*n); // 4 * 4
    printf("Square is %d\n",*n);
}