#include <iostream>
using namespace std;
int main() {
    int num, num2, fact = 1;
    cout << "Enter a number: ";
    cin >> num;
    num2=num;
    if(num==0){
        fact = 1;
    } 
    while(num>0){
        fact *= num;
        num--;
    }
    cout << "Factorial of " << num2 << " is " << fact << endl;
    return 0;
}