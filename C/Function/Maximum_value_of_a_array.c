#include<stdio.h>
int maximum(int a[])
{
    int i;
    int max = a[0];
    for(i=1;i<5;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    return max;
}
int main()
{
    int num[]={9,-1,60,2,5};
    printf("Maximum value of this array %d",maximum(num));
}