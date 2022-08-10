#include<stdio.h>

int binarySearch(int arr[],int size,int element) {

    // Start searching
    int low,mid,high;
    low =0;
    high = size-1;

    //Keep searching until low <= high
    while(low<=high) {
    mid = (low+high)/2;

    if(arr[mid]== element) {
        return mid;
    }
    if(arr[mid]<element) {

        low = mid+1;
    }
    else {
        high = mid-1;
    }

    }

    // searching Ends
    return -1;
    
}

int main(){
    
     int arr[] = {4,8,10,15,18,27,35,47,59,67};
    int element = 0;
    int size = sizeof(arr)/sizeof(arr[0]);

    int searchIndex= binarySearch(arr,size,element);

    printf("The element %d was found at index %d\n",element,searchIndex);
    
    return 0;
}

    