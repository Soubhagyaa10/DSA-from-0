#include <stdio.h>
int main() {
    int max, a=10, b=25, c=15;
    max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("The maximum number is: %d\n", max);
    return 0;
}