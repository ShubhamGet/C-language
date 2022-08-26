//  main.c
//  BubbleSort
//  Created by Shubham Kumar Singh on 03/07/22.
#include<stdio.h>
int main()
{
    int a[20];
    int n,i,j,temp;
    printf("\nEnter the size of Array ");
    scanf("%d",&n);
    printf("\nEnter the array element ");
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    printf("\nEntered element ");
    for (i=0; i<n; i++) {
        printf("%d",a[i]);
    }
    // sorting process
    for (i=1; i<n; i++) {
        for (j=0; j<n-i; j++) {
            if (a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nBubble Sort \n");
    for (i=0; i<n; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}
