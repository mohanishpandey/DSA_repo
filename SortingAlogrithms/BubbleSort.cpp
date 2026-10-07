


/*
The simple algorithm:
1. Start with the first two numbers.
2. If the left number is larger, swap them.
3. Move to the next neighboring pair.
4. After reaching the end, the largest remaining number is fixed.
5. Repeat, skipping the fixed numbers. Stop if a full pass makes no swaps.

Average and worst time: O(n²). Already sorted input: O(n) with the early stop. Extra space: O(1).
  */



void bubbleSort(vector<int>& a) {
    int n = a.size();

    // Each pass puts one largest remaining number at the end.
    for (int pass = 0; pass < n - 1; pass++) {
        bool swapped = false;

        // Skip the numbers already fixed at the end.
        for (int j = 0; j < n - 1 - pass; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }

        // No swaps means the array is already sorted.
        if (!swapped) {
            break;
        }
    }
}
