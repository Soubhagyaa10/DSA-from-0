#include<stdio.h>
int main(){
    int min, a=6, b=3, c=9;
    if(a<b && a<c){
        min = a;
    }
    else if(b<a && b<c){
        min = b;
    }
    else{
        min = c;
    }
    printf("The minimum number is: %d\n", min);
    return 0;
}