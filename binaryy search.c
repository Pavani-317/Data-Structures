#include<stdio.h>
#include<time.h>
int main()
{
    int i,j,t,n,se,first,last,middle,a[100];
    clock_t e,s;
    double ts;
    printf("enter no of elements:\n");
    scanf("%d",&n);
    printf("enter which element you need to find:\n");
    scanf("%d",&se);
    printf("enter the list of numbers:\n");
    s=clock();
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
            }
        }
    }
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
    if(a[middle]<se)
    {
        first=middle+1;
    }
    else if(a[middle]==se)
    {
        printf("The element %d is present in the list\n",se);
        break;
    }
    else
    {
        last=middle-1;
        middle=(first+last)/2;
    }
    }
    if(first>last)
    {
        printf("The element %d is not present in the list\n",se);
    }
    e=clock();
    ts=(double)(e-s);
    printf("the total time taken is:\n");
    printf("\n%e",ts);
    return 0;
}
