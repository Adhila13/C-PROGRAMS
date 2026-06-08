// This is a program to find the largest number of a list
#include <stdio.h>
int largeNum(int array[],int n){ //funcion to find large number of the list
    int large,i;
    large=array[0];
    for(i=0;i<n;i++){
        if(array[i]>large){
            large=array[i];
        }
    }
    return large;
}

int main() {
    int n,i,largestNumber;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    largestNumber=largeNum(array,n);
    printf("Largest Number of the list:%d",largestNumber);
    return 0;
}
