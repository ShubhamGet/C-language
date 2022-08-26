#include<stdio.h>
#include<string.h>
int max(int a, int b);

int lcs( char *X, char *Y, int m, int n )
{
    if (m == 0 || n == 0)
       return 0;
    if (X[m-1] == Y[n-1])
       return 1 + lcs(X, Y, m-1, n-1);
    else
       return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}
/* Utility function to get max of 2 integers */
int max(int a, int b)
{
    return (a > b)? a : b;
}
/* Driver program to test above function */
int main()
{
char X[] = "AHHTAB";
char Y[] = "SXHXUYB";
 
int m = strlen(X);
int n = strlen(Y);
 
printf("\n Length of LCS is %d\n ", lcs( X, Y, m, n ) );
return 0;
}
/*
 Time complexity of the above naive recursive approach is O(2^n) in worst case and worst case happens when all characters of X and Y mismatch i.e., length of LCS is 0.
 */
