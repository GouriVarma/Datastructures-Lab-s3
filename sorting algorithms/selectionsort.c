//Selection Sort

#include<stdio.h>
int read(int,int[]);
int selectionsort(int,int[]);
void main()
{
    int n,a[50],i;
    printf("Enter number of elements :");
    scanf("%d",&n);
    read(n,a);
    selectionsort(n,a);
    printf("sorted list in ascending order is: ");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}

int read(int n,int a[])
{
   printf("Enter elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
   

int selectionsort(int n,int a[])
{
    int min,i,j,temp;
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
               min = j;
            }
        }
        if(min !=i)
        {
            temp = a[i];
            a[i]=a[min];
            a[min]=temp;
        }

    }

}
