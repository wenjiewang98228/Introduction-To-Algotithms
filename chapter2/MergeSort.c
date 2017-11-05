#include<stdio.h>

void MERGESORT(int arr[],int left,int right);
void MERGE(int arr[],int left,int center,int right);

int main(){
    int arr[10] = {16,64,35,97,465,13,87,99,85,64};
    int n = 10;

    MERGESORT(arr,0,n-1);

    for(int i = 0; i < 10; i++){
        printf("%d  ",arr[i]);
    }
}

void MERGESORT(int arr[],int left,int right){
    if(left<right){
        int center = (left+right)/2;
        MERGESORT(arr,left,center);
        MERGESORT(arr,center+1,right);
        MERGE(arr,left,center,right);
    }
}

void MERGE(int arr[],int left, int center, int right){
    int leftPos = left;
    int rightPos = center+1;
    int leftEnd = center;
    int rightEnd = right;
    int tmpPos = leftPos;
    int tmp[10];

    while(leftPos <= leftEnd && rightPos <= rightEnd){
        if(arr[leftPos] < arr[rightPos]){
            tmp[tmpPos++] = arr[leftPos++];
        }
        else{
            tmp[tmpPos++] = arr[rightPos++];
        }
    }

    while(leftPos <= leftEnd){
        tmp[tmpPos++] = arr[leftPos++];
    }

    while(rightPos <= rightEnd){
        tmp[tmpPos++] = arr[rightPos++];
    }

    for(int i = left; i < right; i++){
        arr[i] = tmp[i];
    }
}
