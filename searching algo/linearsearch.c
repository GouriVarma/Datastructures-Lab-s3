//Linear Search

#include<stdio.h>

int linearsearch(int,int[],int);

void main()
{
    int n,a[50],search,i,j;
    printf("Enter number of elements :");
    scanf("%d",&n);
    printf("Enter elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched :");
    scanf("%d",&search);
    j=linearsearch(n,a,search);
    if (j==-1)
    {
        printf("Element not found");
    }
    else
    {
        printf("%d found at position %d",search,j+1);
    }

}
int linearsearch(int n ,int a[],int search)
{
    for(int i=0 ;i<n;i++)
    {
        if(a[i]==search)
        {
            return i;
        }
    } 
    return -1;
        
}
