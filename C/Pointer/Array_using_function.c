#include<stdio.h>

void array(int *ptr)
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }

}

int main()
{
    int a[5]={1,2,3,4,5};
    array(&a[0]);
}