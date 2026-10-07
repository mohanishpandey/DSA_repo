/*
The simple algorithm:
1. Treat the first number as already sorted.
2. Save the next number as key.
3. Move larger numbers in the sorted part one position right.
4. Insert key into the space created.
5. Repeat for each remaining number.


  */


void insertionSort(vector<int>& a) {
    int n = a.size();

    // Start with the second number.
    for (int i = 1; i < n; i++) {
        int key = a[i]; // Save the number we want to insert.
        int j = i - 1;  // Start at the end of the sorted part.

        // Shift larger numbers one position right.
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        // Insert key after the last smaller or equal number.
        a[j + 1] = key;
    }
}
