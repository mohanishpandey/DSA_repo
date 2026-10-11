
/*The simple quick sort algorithm:
1. Choose a pivot—we use the last element. the choice of partition if it falls to middle mostly then it can give nlogn complexity.
2. Partition the array: move values <= pivot to its left and values > pivot to its right.
3. The pivot is now in its final sorted position.
4. Apply quick sort to the left part.
5. Apply quick sort to the right part.
6. Stop when a part has zero or one element.*/





#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int partition(vector<int>& values, int left, int right) {
    int pivot = values[right];
    int boundary = left;

    for (int scan = left; scan < right; ++scan) {
        if (values[scan] <= pivot) {
            swap(values[boundary], values[scan]);
            ++boundary;
        }
    }

    // Put the pivot in its final sorted position.
    swap(values[boundary], values[right]);
    return boundary;
}

void quickSort(vector<int>& values, int left, int right) {
    if (left >= right) {
        return;
    }

    int pivotIndex = partition(values, left, right);

    quickSort(values, left, pivotIndex - 1);
    quickSort(values, pivotIndex + 1, right);
}

int main() {
    vector<int> values = {5, 2, 9, 1, 6};

    quickSort(values, 0, static_cast<int>(values.size()) - 1);

    for (int value : values) {
        cout << value << ' ';
    }
    cout << '\n';

    return 0;
}
