#include<stdio.h>
int main(){
    int cons;
    printf("Enter a electricity units consumed: ");
    scanf("%d", &cons);
    if(cons>0 && cons<=100){
        printf("LOW");
    }
    else if(cons<=300){
        printf("MEDIUM");
    }
    else
        printf("HIGH");
}