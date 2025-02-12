#include <stdio.h>

void printNumbers(int arr[],int n,int size);

int main(){
    int number , size;
    int arr[100] = {4, 1, 2, 5, 3, 4, 2, 5, 1, 3,
        2, 4, 5, 1, 3, 2, 5, 4, 1, 3,
        5, 2, 4, 3, 1, 5, 2, 4, 1, 3,
        2, 5, 4, 3, 1, 5, 4, 2, 3, 1,
        4, 5, 3, 2, 1, 4, 5, 3, 2, 1,
        5, 4, 3, 2, 1, 5, 3, 4, 2, 1,
        4, 3, 5, 2, 1, 4, 5, 3, 1, 2,
        5, 4, 3, 1, 2, 5, 4, 3, 2, 1,
        4, 5, 3, 2, 1, 4, 5, 2, 3, 1,
        5, 4, 3, 1, 2, 5, 4, 3, 2, 1};
    number = 4;
    size = sizeof(arr) / sizeof(arr[0]);
    printNumbers(arr,number,size);
}

void printNumbers(int arr[],int n,int size){
    for(int i = 0 ; i < size ; i++){
        if(arr[i] == n){
        printf("%d \t",i);


        }
    }
}