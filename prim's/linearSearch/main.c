#include<stdio.h>
int main()
{
    int a[20];
    int i,n,search;
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
    for(i=0;i<n;i++)
    {
         if(search==a[i])
         {
              printf("%d is present at location %d \n",search,i+1);
              break;
         }
    }
    if(i==search)
    {
        printf("\n %d isn't present at location \n",search);
    }
    return 0;
}

