#include<stdio.h>
int main()
{
    int A[100],*p,i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter values: ");
    for(p=A;p<=A+n-1;p++)
        scanf("%d",p); // &A[i]=p
    printf("Elements in reverse order: \n");
    for(p=A+n-1; p>=A;p--)
        printf("%d ",*p);
}