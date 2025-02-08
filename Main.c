#include<stdio.h>

int calculator(int num_1 , int num_2 , char ch);

int main(){
    int  number_1 , number_2 , answer;
    char symbol;
    printf("Enter Number 1 : ");
    scanf("%d",&number_1);
    printf("Enter Number_2 : ");
    scanf("%d",&number_2);
    printf("Enter Symbol : ");
    scanf(" %c",&symbol);

    answer = calculator(number_1 , number_2 , symbol);

    printf("%d",answer);
}

int calculator(int num_1 , int num_2 , char ch){
    switch(ch){
        case '+': return num_1 + num_2;
        case '-': return num_1 - num_2;
        case '*': return num_1 * num_2;
        case '/': return num_1 / num_2;
        default: return 0;
    }
}