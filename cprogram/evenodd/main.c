#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    printf("Enter number ");
    scanf("%d",&num);
    if (num%2==0) {
        printf("even")
    } else {
        printf("odd")
    }
    return 0;
}
