#include<stdio.h>
int main()
{
    int num[100],n,i,max;
    printf("Enter how many numbers you need to work with: ");
    scanf("%d",&n);
    printf("Enter your numbers: ");
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    max = num[0];
    for(i=1;i<n;i++)
       { 
        if(max< num[i])
            max = num[i];
       }
    printf("The maximum number is: %d",max);
    return 0;
}