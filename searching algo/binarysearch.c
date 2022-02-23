//Binary search with sorting

#include<stdio.h>
int bubblesort(int,int[]);
int binarysearch(int,int[],int);

void main()
{
    int n,a[50],search,i,j;
    printf("Enter number of elements :");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched :");
    scanf("%d",&search);
    bubblesort(n,a);
    printf("sorted list is: ");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    int key = binarysearch(n,a,search);
    if (key==-1)
    {
        printf("\nElement not found");
    }
    else
    {
        printf("\n%d found at position %d of sorted list of elements",search,key+1);
    }
}
   

int bubblesort(int n,int a[])
{
    int temp;
    for(int i = 0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

}

int binarysearch(int n,int a[],int search)
{
    int l=0,h=n-1,mid;
    while(l<=h)
    {
        mid  = (l+h)/2;
        if(a[mid] == search)
            return mid ;
        if(a[mid]<search)
            l=mid+1;
        else
            h=mid-1;
    }
    return -1;
}
