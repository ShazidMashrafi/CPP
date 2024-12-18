#include<stdio.h>
void swap(int *ptr1, int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
};

int main()
{
    int x=10,y=20;

    printf("Before swapping: X= %d, Y= %d\n",x,y);
    swap(&x,&y);
    printf("After swapping: X= %d, Y= %d\n",x,y);
}