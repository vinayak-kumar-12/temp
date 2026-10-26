
#include <iostream>
using namespace std;

int main() {
    int number[] = {10, 50, 30, 70, 80, 20};
    int target_value = 30;
    int size = 6;

    for (int i = 0; i < size; i++) {
        if (number[i] == target_value) {
            cout << "Element found at index: " << i;
            return 0;
        }
    }

    cout << "Element not found";

    return 0;
}
