
/* The simple algorithm:
1. Start at the first position.
2. Find the smallest number from that position to the end.
3. Swap it with the number at the current position.
4. Move one position right and repeat.
Once a number is placed, leave it alone—its position is correct. */

void selectionSort(vector<int>& a) {
    int n = a.size();

    // i is the position we want to fill.
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume the current number is smallest.

        // Look through the remaining numbers.
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) 
                minIndex = j; // Remember the smaller number's position.
            }
        }

        // Put the smallest number into position i.
        swap(a[i], a[minIndex]);
    }
}
