#include<stdio.h>
int main(){
    int a,b,c,d, max;
    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    max=a;
    if(b>max)
        max=b;
    else if(c>max)
        max=c;
    else if(d>max)
        max=d;
    printf("%d is the largest number.", max);
    return 0;
}