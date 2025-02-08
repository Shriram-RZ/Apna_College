#include <stdio.h>

void indianUser(){
    printf("Hello Indian");
}

void frenchUser(){
    printf("Hello French");
}

int main(){
    char user;
    printf("Enter User : ");
    scanf("%c",&user);
    switch(user){
        case 'i':
        indianUser();
        break;
        case 'f':
        frenchUser();
        break;
        default:
        printf("Invalid");
    }
    return 0;
}