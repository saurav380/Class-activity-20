#include <iostream>
using namespace std;

int main() {
    int* arr = nullptr;
    int num, count = 0, sum = 0;

    cout << "Enter numbers (enter -1 to stop):" << endl;

    while (true) {
        cin >> num;
        if (num == -1) break;

        // Allocate a larger array
        int* temp = new int[count + 1];

        // Copy old values
        for (int i = 0; i < count; i++) {
            temp[i] = arr[i];
        }

        // Add new value
        temp[count] = num;
        count++;

        // Free old memory and point to new array
        delete[] arr;
        arr = temp;
    }

    // Calculate the sum
    for (int i = 0; i < count; i++) {
        sum += arr[i];
    }

    cout << "The sum of the array is: " << sum << endl;

    // Free memory
    delete[] arr;

    return 0;
}