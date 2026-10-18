//FIND THE MINIMUM LENGTH OF A CONTIGUOUS SUBARRAY WHOSE SUM IS AT LEAST K.
#include <iostream>
using namespace std;

int main() {
    int arr[7] = {2, 3, 1, 2, 4, 3, 1};
    int k = 7;

    int i, j, sum, temp;
    int count = 0, found = 0;

    for (i = 0; i < 7; i++) {
        sum = arr[i];
        temp = 1;

        if (sum >= k) {
            if (found == 0 || temp < count) {
                count = temp;
            }
            found = 1;
            continue;
        }

        for (j = i + 1; j < 7; j++) {
            sum += arr[j];
            temp++;

            if (sum >= k) {
                if (found == 0 || temp < count) {
                    count = temp;
                }
                found = 1;
                break;
            }
        }
    }

    if (found == 1) {
        cout << "Minimum length = " << count;
    } else {
        cout << "0";
    }

    return 0;
}