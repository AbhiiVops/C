#include<stdio.h>

void main(){


  int i,j,temp,min;
  int a[7] = {9,3,1,4,2,7,5};
  

  for(i=0;i<6;i++) {
    min=i;

    for(j=i+1;j<7;j++) {

        if(a[j]<a[min]) {
            min =j;
        }
    }

    temp = a[i];
    a[i] = a[min];
    a[min] = temp;
  }

  printf("Array after sorting is \n");
  for(i=0;i<=6;i++) {
    printf("%d",a[i]);
  }
  
}