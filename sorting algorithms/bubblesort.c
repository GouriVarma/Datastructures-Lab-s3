#include<stdio.h>
int bubblesort(int,int[]);
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
    bubblesort(n,a);
    printf("sorted list in ascending order is: ");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
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
return 0;
}
