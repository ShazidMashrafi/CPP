#include<stdio.h>
float tarea(float b,float h)
{
    return .5*b*h;
}
int main()
{
    float base,height;
    printf("Enter base: ");
    scanf("%f",&base);
    printf("Enter height: ");
    scanf("%f",&height);
    printf("Area: %.2f",tarea(base,height));
}
