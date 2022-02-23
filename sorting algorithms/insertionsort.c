//Insertion Sort

#include<stdio.h>
int read(int,int[]);
int insertionsort(int,int[]);
void main()
{
    int n,a[50],i;
    printf("Enter number of elements :");
    scanf("%d",&n);
    read(n,a);
    insertionsort(n,a);
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
   

int insertionsort(int n,int a[])
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp = a[i];
        j = i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        } 
        a[j+1]=temp;
    }

}
