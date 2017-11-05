#include<stdio.h>
int main(){
    int arr[10] = {15,64,167,46,13,98,48,66,32,70};

    for(int i = 1; i < 10; i++){
        int tmp = arr[i];
        int j;
        for(j = i-1; j >= 0 && arr[j] < tmp; j--){
            arr[j+1] = arr[j];
            arr[j] = tmp;
        }

    }

    for(int m = 0; m < 10; m++){
        printf("%d  ",arr[m]);
    }
}
