#include <limits.h>
#include <stdio.h>
int MatrixChainOrder(int p[], int i, int j)
{
    if (i == j)
        return 0;
    int k;
    int min = INT_MAX;
    int count;
    for (k = i; k < j; k++) {
        count = MatrixChainOrder(p, i, k) +
                MatrixChainOrder(p, k + 1, j) +
                p[i - 1] * p[k] * p[j];
        if (count < min)
            min = count;
    }
    // Return minimum count
    return min;
}
// Driver program to test above function
int main()
{
    int arr[] = { 1, 2, 6, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\n Minimum number of multiplications is %d \n",
           MatrixChainOrder(arr, 1, n - 1));
    return 0;
}
/*
 Time Complexity for Matrix Chain Multiplication

 O(N*N*N) where N is the number present in the chain of the matrices. As we know that we use a matrix of N*N order to find the minimum operations. We need to find the minimum value for all the k values where i<=k<=j. So overall we use 3 nested for loop.
 */
