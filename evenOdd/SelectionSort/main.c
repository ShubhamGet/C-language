//  main.c
//  SelectionSort
//  Created by Shubham Kumar Singh on 03/07/22.
#include<stdio.h>
int main()
{
    int a[10];
    int i,j,n,temp;
    printf("Enter the size of Array \n");
    scanf("%d",&n);
    printf("Enter the array element \n");
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
   //sorting process
    for (i=0; i<n; i++) {
        for (j=i+1; i<n; i++) {
            if(a[i]>a[j])
            {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
            }
        }
    }
    printf("Selection Sort\n");
    for (i=0; i<=n; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}
