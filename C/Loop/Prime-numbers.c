#include<stdio.h>
int main()
{
    int i,num,count=0;
        printf("Enter any number: ");
        scanf("%d",&num);

        for(i=2; i<num; i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
            printf("\nThis is a prime number\n\n");
        else printf("\nThis is not a prime number\n\n");
    return 0;
}
