#include <stdio.h>
int main() {
    
    int a[10];
    int i,n,left,mid,right,search;
    printf("\n Enter the size of array ");
    scanf("%d",&n);
    printf("\n Enter the number of element ");
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the number of searching purpose ");
    scanf("%d",&search);
    
    left=0;
    right=n-1;
    mid=(left+right)/2;
    while(left<=right)
    {
        if(a[mid]<search)
            left=mid+1;
        else if (a[mid]==search)
        {
            printf("%d is present at location %d\n ",search,mid+1);
            break;
        }
        else
        {
            right=mid-1;
            mid=(left+right)/2;
        }
    }
    if(left>right)
    {
        printf("%d is not present at location \n",search);
    }
    return 0;
}
