#include<stdio.h>

void binarySearch(int arr[],int n,int low,int high);

int main(){
    int arr[10] = {1,11,35,46,79,85,110,165,233,666};

    binarySearch(arr,12,0,9);
    binarySearch(arr,79,0,9);
    binarySearch(arr,233,0,9);
}

void binarySearch(int arr[],int n,int low,int high){


    if(low<high){
        int center;
        center = (low+high)/2;
        //printf("hi");
        if(arr[center] > n){
            binarySearch(arr,n,low,center-1);
        }
        if(arr[center] < n){
            binarySearch(arr,n,center+1,high);
        }
        if(arr[center] == n){
            printf("find %d at %d\n",n,center);
            return;
        }
    }
    else{
        printf("can't find %d\n",n);
        return;
    }

}
