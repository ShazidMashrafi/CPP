#include <stdio.h>

struct stores
{
    char name[20];
    float price;
    int quantity;
};

struct stores update(struct stores product, float p, int q)
{
    product.price +=p;
    product.quantity +=q;
    return(product);
}

float mul(struct stores stock)
{
    return (stock.price * stock.quantity);
}

int main()
{
    float p_in, value;
    int q_in;
    struct stores item = {"XYZ", 25.75, 12};

    printf("Enter increment values:");
    printf("Price increment and quantity increment\n");
    scanf("%f %d",&p_in,&q_in);

    item=update(item,p_in,q_in);
    printf("Updated values of the item:\n\n");
    printf("Name     : %s\n",item.name);
    printf("Price    : %.2f\n",item.price);
    printf("Quantity :%d\n",item.quantity);

    value=mul(item);
    printf("Value of the item: %.2f",value);
} 