#include<stdio.h>
int main()
{
    int num[100],n,i,min;
    printf("Enter how many numbers you need to work with: ");
    scanf("%d",&n);
    printf("Enter your numbers: ");
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    min = num[0];
    for(i=1;i<n;i++)
        if(min>num[i])
            min=num[i];
    printf("The maximum number is: %d",min);
    return 0;
}