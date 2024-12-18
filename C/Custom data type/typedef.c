//Renames any data type
#include<stdio.h>
struct product
{
    char name[20];
    int price;
};
int main()
{
    typedef struct product Book; //struct prodcut is now renamed as Book

    Book b= {"My life",350};
    printf("Book name: %s\n",b.name);
    printf("Book price: %d\n",b.price);
    
}