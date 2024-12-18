#include<stdio.h>
int main()
{
    int i,n1,n2,even=0,odd=0,o,e;
    printf("Odd-even series.\n");
    printf("Enter starting number: ");
    scanf("%d",&n1);
    printf("Enter ending number: ");
    scanf("%d",&n2);
    while(i<=n2)
    {
        if(i%2!=0)
            odd=odd+i;
        else
            even=even+i;
        i++;
    }N
    printf("Sum= %d\n",odd-even);
    getchar();
}
