#include <stdio.h>

int main() {
    // insert code here...
    int num;
    printf("Enter number ");
    scanf("%d",&num);
    if (num%2==0) {
        printf("Number is even");
    } else {
        printf("Number is odd");
    }
    return 0;
}
