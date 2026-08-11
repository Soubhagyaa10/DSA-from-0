#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<0){
        n = -n;
    }
    else if(n>0){
        n = n;
    }
    else{
        n = 0;
    }
    printf("The absolute value of the number is: %d\n", n);
}