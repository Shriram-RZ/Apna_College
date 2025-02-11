#include <stdio.h>

void doWork(int a , int b , int *sum , int *prod , int *avg);

int main(){
    int a , b , sum , prod , avg;
    a = 10;
    b = 20;

    doWork(a,b,&sum,&prod,&avg);
    printf("The Sum is : %d \n The Product is : %d \n The Average is : %d",sum,prod,avg);
}


void doWork(int a , int b , int *sum , int *prod , int *avg){
    *sum = a + b;
    *prod = a * b;
    *avg = (a+b)/2;
}