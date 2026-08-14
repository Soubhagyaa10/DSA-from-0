#include<iostream>
using namespace std;
int main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    cout<<"Number of factors of " << num << " is: " << count << endl;
    return 0;
}