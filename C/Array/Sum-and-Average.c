#include<stdio.h>
int main()
{
    int a[100],sum=0,i,n;
    float avg;
    printf("Enter your required numbers: ");
    scanf("%d",&n);
    printf("Enter your numbers: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum=sum+a[i];
    avg=(float)sum/n;
    printf("The sum is: %d\n",sum);
    printf("Average: %.2f\n",avg);
    return 0;
}