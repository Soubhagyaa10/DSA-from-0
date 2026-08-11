#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n>0){
        printf("The number entered is positive.");
    }
    else if(n<0){
        printf("The number entered is negative.");
    }
    else{
        printf("The number entered is zero.");
    }
    return 0;
}