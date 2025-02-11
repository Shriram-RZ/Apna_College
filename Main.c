#include <stdio.h>

void sqaure(int n);
void _sqaure(int *n);

int main(){
    int number = 10;
    sqaure(number);
    printf("The Number is : %d\n",number);

    _sqaure(&number);
    printf("The Number is Reference %d\n",number);


    
}

//Call by Value
void sqaure(int n){
    n = n * n;
    printf("The Square is : %d\n",n);
}


//Call by Reference
void _sqaure(int *n){
    *n = (*n) * (*n);
    printf("The Square is Reference %d\n",*n);
}