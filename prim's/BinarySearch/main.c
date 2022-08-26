#include<stdio.h>
int main()
{
    int a[20];
    int i,n,f,m,l,search;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    printf("Enter the array element \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered the array element \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the number for searching purpose \n");
    scanf("%d",&search);

    // initialization
    f=0;
    l=n-1;
    m=(f+l)/2;
    while(f<=l)
    {
        if(a[m]<search)
           f=m+1;
        else if(a[m]==search)
        {
            printf("%d found at location %d \n",search,m+1);
            break;
        }
        else
        {
            l=m-1;
            m=(f+l)/2;
        }
    }
    if(f>l)
    {
        printf("\n %d is not found in the array \n",search);
    }
    return 0;
}

