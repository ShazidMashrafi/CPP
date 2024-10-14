/* In a  bank a new accountant joined and he was calculating the total amount of money the bank currently should
have in their hand. At the beginning of the calculation he found that N customers had money in this bank.
Some have balance money which are represented as positive numbers and some have loans which are represented as
negetive float numbers.
After his calculation he has to submit a report mentioning the Total amount, Positive Balance and the loan amount that 
the has currently in their hand. Here the positive Balance is the total summation of all the customers' balance who
do not have a loan. Loan amount is the summation amount of all Loans in this Bank. Total amount is the remaining balance 
after substracting the loan amount from the Postive Balance. After that he also has to show the individual loan amount. 

Input: An integer number N that defines the number of Customers followed by N float values each representing the
current balance or load of the customers.

Output: Total amount, Postive balance and loan amount in seperate lines. Then all the individual loans amount in a single line
seperated by a tab. 

                Sample input                                Sample output
            9                                               54
            5 24 1 13 -30 19 -5 19 8                        89
                                                            35
                                                            -30     -5
*/


#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, loan = 0, bal = 0;
    scanf("%d", &n);
    int m[n - 1];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
        if (m[i] < 0)
            loan = loan + m[i];
        if(m[i]>=0)
            bal = bal + m[i];
    }
    printf("%d\n%d\n%d\n",bal+loan,bal,abs(loan));
    for (i = 0; i < n; i++)
    {
        if (m[i] < 0)
            printf("%d\t", m[i]);
    }
}