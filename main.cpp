#include <iostream>
using namespace std;

void bubbleSort(int numbers[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++)
            if (numbers[j] > numbers[j + 1])
                swap(numbers[j], numbers[j + 1]);
    }
}

int main() {
    int numbers[5] = {5, 4, 3, 2, 1};   // worst case

    bubbleSort(numbers, 5);

    for (int i = 0; i < 5; i++)
        cout << numbers[i] << " ";
    cout << endl;

    return 0;
}
