#include <stdio.h>

struct record
{
    char author[20];
    char title[30];
    float prices;
    struct
    {
        char month[10];
        int year;
    } date;
    char publisher[10];
    int quantity;
};
int main()
{
    char tittle[30], author[20];
    int index, no_of_records;
    char response[10], quantity[10];

    struct record book[] =
    {
        {"Ritche", "C Language", 45.00, "May", 1977, "PHI", 10},
        {"Kochan", "Programming in C", 75.50, "July", 1983, "Hayden", 5},
        {"Balagurusamy", "Basic", 30.00, "January", 1984, "THM", 0},
        {"Balagurusamy", "COBOL", 60.00, "December", 1988, "Macmilian", 25}
    };
    
}