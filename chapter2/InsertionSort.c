#include<stdio.h>
int main(){
    int arr[10] = {26,3,6,79,16,76,56,45,233,66};

    for(int i = 1; i < 10; i++){
        int tmp = arr[i];
        int j;
        for(j = i-1; j >= 0 && arr[j] > tmp; j--){
            arr[j+1] = arr[j];
            arr[j] = tmp;
        }
    }

    for(int i = 0; i < 10; i++){
        printf("%d  ",arr[i]);
    }
}
