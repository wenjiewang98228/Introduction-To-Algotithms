#include<stdio.h>

int main(){
    int arr[10] = {12,64,13,81,20,74,36,1,52,11};
    int i,j;

    for(i = 0;i < 10; i++){
        for(j = 9; j >= i; j--){
            if(arr[j] < arr[j-1]){
                int tmp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for(i = 0; i < 10; i++){
        printf("%d ",arr[i]);
    }
}
