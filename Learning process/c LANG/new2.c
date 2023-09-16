#include <stdio.h>

int main() {
    int A[] = {10, 20, 30, 40};
    int B[] = {5, 5, 5, 5};
    int n = sizeof(A) / sizeof(A[0]);
    
    int max_diff = 0;
    for (int i = 0; i < n; i++) {
        int diff = A[i] - B[i];
        if (diff < 0) {
            printf("-1\n");
            return 0;
        }
        if (diff > max_diff) {
            max_diff = diff;
        }
    }
    
    int steps = 0;
    for (int i = 0; i < n; i++) {
        steps += (max_diff - (A[i] - B[i]));
    }
    
    printf("Minimum steps required: %d\n", steps);
    
    return 0;
}
