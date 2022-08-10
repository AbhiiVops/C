#include<stdio.h>

void square(int n);

int main() {
    int number = 4;
    square(number);  // -> copy of 4 will be passed as argument

    printf("Square is %d\n",number);
    
    return 0;
}

void square(int n) {

    n *=n;
    printf("square is =%d\n",n);
}