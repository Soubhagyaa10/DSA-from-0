#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%2==0){
        printf("The number entered is even.");
    }
    else{
        printf("The number entered is odd.");
    }
    return 0;
}