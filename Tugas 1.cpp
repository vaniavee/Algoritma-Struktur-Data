#include <iostream>
#include <vector>
using namespace std;

vector<int> findDuplicates(int arr[], int size) {
    vector<int> count(size, 0);
    for (int i = 0; i < size; i++) {
        count[arr[i] - 1]++;
    }

    vector<int> duplicates;
    for (int i = 0; i < size; i++) {
        if (count[i] > 1) {
            duplicates.push_back(i + 1);
        }
    }
    return duplicates;
}
// Main program
int main() {
    int arr[] = {2, 1, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> duplicates = findDuplicates(arr, size);
    cout << "Duplicate values: ";
    for (int i = 0; i < duplicates.size(); i++) {
        cout << duplicates[i] << " ";
    }
    cout << endl;
    return 0;
}