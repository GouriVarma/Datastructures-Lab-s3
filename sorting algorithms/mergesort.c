//Merge Sort

#include<stdio.h>
int read(int,int[]);
int mergesort(int[],int,int);
int simplemerge(int[],int,int,int);
void main()
{
    int n,a[50],i;
    printf("Enter number of elements :");
    scanf("%d",&n);
    read(n,a);
    mergesort(a,0,n-1);
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
   
int mergesort(int a[],int l,int h)
{
    if(l<h)
    {
        int mid = (l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        simplemerge(a,l,mid+1,h);
    }
}

int simplemerge(int a[],int f,int s,int t)
{
    int temp[100],k=0;
    int i =f;
    int j = s;
    while(i<s && j<=t)
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
             temp[k++]=a[j++];
    }
    while(i<s)
        temp[k++]=a[i++];
    while (j<=t)
        temp[k++]=a[j++];
    
    for(i=f,j=0;j<k;)
       a[i++]=temp[j++];
}
