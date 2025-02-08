#include <stdio.h>

int main(){
    int n , sum = 0;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(int i = 1 , j = n ; i <= n && j >= 1 ; i++ , j--){
        sum = sum + i;
        printf("%d and %d \n",i,j);


    }
    printf("Total Sum is : %d",sum);
    return 0;
}