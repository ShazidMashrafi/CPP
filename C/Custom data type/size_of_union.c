#include<stdio.h>
union test
{
    int x,y;
};
union test2
{
    char ch;
    int x;
};
union test3
{
    char name[16];
    float f;
};
struct test4
{
    int x;
    int y;
    char a;
};
int main()
{
    union test t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;
    printf("sizeof t1 = %d\n",sizeof(t1));
    printf("sizeof t2 = %d\n",sizeof(t2));
    printf("sizeof t3 = %d\n",sizeof(t3));
    printf("sizeof t4 = %d\n",sizeof(t4));
}