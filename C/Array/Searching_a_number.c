//Linear search
#include<stdio.h>
int main()
{
    int num[] = {10,2,15,20,35,2,46,85};
    int value,pos=0,i;
    printf("Enter the value you want to search: ");
    scanf("%d",&value);

    for(i=0;i<7;i++)
    {
        if(value==num[i])
        {
            pos = i+1;
            break;
        }
    }
    if(pos==0)
        printf("Item not found");
    else printf("The item is found at position %d",pos);
    return 0;
}