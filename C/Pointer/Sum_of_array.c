#include<stdio.h>
int main()
{
    int A[100],i,n;
    int sum=0, *p, *ptr=A;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    printf("Enter values: ");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    // Array name itself is an pointer. But, it can't be assigned to another value. 
    //It is decleared when array is decleard.
    //It represents the base adress of the first element of the same array.
    // *(A+i)=A[i]; SO,  A+i=&A[i]
    // Assignning a new pointer to the array pointer is a better practice. Like-  int *ptr = A;
    for(p=ptr; p<ptr+n; p++) 
        sum+=*p;
    printf("The sum of the elements of this array is %d",sum);
}
