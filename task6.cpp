#include <iostream>
#include <climits>

using namespace std;

int main() {

    int arr[] = {3, 1, 7, 9, 2, 5, 8, 4};
    int size = sizeof(arr) / sizeof(arr[0]);


    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }


    cout << "Minimum value in the array: " << minVal << endl;
    cout << "Maximum value in the array: " << maxVal << endl;

    return 0;
}

