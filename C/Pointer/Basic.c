#include<stdio.h>
int main()
{
    int x =5;
    int *ptr; //* means a pointer. 
    //Pointer needs to be the same data type as the variable it will point to.

    ptr=&x; //signs variable "x"'s adress int ptr

    printf("%d\n",x); //prints variable value
    printf("%d\n",&x); //prints variable adress
    printf("%d\n",ptr); // prints variable adrees because ptr=&x
    printf("%d\n",*ptr); //prints variable value
    printf("%d\n",&ptr); //prints ptr variables adress
}