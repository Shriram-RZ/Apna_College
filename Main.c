#include <stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;
    int _age = (int) &ptr;

    char symbol = '*';
    char *ptr_Symbol = &symbol;
    char _symbol = *ptr_Symbol;
    printf("%p \n",&age);
    printf("%p \n",ptr); //hexadecimal
    printf("%p \n",&ptr);
    printf("%d \n",*ptr);

    printf("%c \n",_symbol);


    printf("%d \n",_age);
    printf("%p \n",&_age);
    printf("%u \n",ptr); //Number
    printf("%u \n",&age);
    printf("%p",symbol);
    
}