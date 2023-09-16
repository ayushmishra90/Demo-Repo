#include <iostream>
#include <vector>
using namespace std;

int countOnes(vector<int>& A) {
    int n = A.size();
    int ones = 0;

    // Count the number of ones in the original array
    for (int i = 0; i < n; i++) {
        if (A[i] == 1) {
            ones++;
        }
    }

    int maxOnes = ones;  // Maximum number of ones after flip
    int flipOnes = 0;  // Number of ones in the current flip

    // Calculate the number of ones in all possible flips
    for (int i = 0; i < n; i++) {
        if (A[i] == 1) {
            flipOnes--;
        } else {
            flipOnes++;
        }

        if (flipOnes < 0) {
            flipOnes = 0;
        }

        maxOnes = max(maxOnes, ones + flipOnes);
    }

    return maxOnes;
}

int main() {
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;

    vector<int> A(N);
    cout << "Enter the elements of the array (0's and 1's): ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int maxOnes = countOnes(A);
    cout << "Maximum number of ones after flip: " << maxOnes << endl;

    return 0;
}
