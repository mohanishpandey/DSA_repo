#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& values, int left, int mid, int right) {
    vector<int> temp;
    temp.reserve(right - left + 1);

    int i = left;
    int j = mid + 1;

    // Merge the two sorted halves.
    while (i <= mid && j <= right) {
        if (values[i] <= values[j]) {
            temp.push_back(values[i++]);
        } else {
            temp.push_back(values[j++]);
        }
    }

    // Copy any remaining elements.
    while (i <= mid) {
        temp.push_back(values[i++]);
    }

    while (j <= right) {
        temp.push_back(values[j++]);
    }

    // Copy the merged result back.
    for (int k = 0; k < static_cast<int>(temp.size()); ++k) {
        values[left + k] = temp[k];
    }
}

void mergeSort(vector<int>& values, int left, int right) {
    if (left >= right) {
        return; // Zero or one element is already sorted.
    }

    int mid = left + (right - left) / 2;

    mergeSort(values, left, mid);
    mergeSort(values, mid + 1, right);

    merge(values, left, mid, right);
}

int main() {
    vector<int> values = {5, 2, 9, 1, 5, 6};

    mergeSort(values, 0, static_cast<int>(values.size()) - 1);

    for (int value : values) {
        cout << value << ' ';
    }
    cout << '\n';

    return 0;
}
