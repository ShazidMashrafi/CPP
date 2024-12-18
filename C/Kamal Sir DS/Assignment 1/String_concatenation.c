#include<stdio.h>
#include<string.h>
int main()
{
    char string_1[100], string_2[100], final_string[200];
    printf("Enter first string: ");
    scanf("%s", string_1);
    printf("Enter second string: ");
    scanf("%s", string_2);
    int len_1 = strlen(string_1);
    int len_2 = strlen(string_2);
    for(int i = 0; i < len_1; ++i)
        final_string[i] = string_1[i];
    for(int i = 0; i < len_2; ++i)
        final_string[i+len_1] = string_2[i];
    final_string[len_1+len_2] = '\0';
    printf("The concatenated string is: %s",final_string);
    
}