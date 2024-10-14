/* King Joj had three daugthers. He was very tense about their marriage. After a while of thinking,
he came up with a cleaver idea. The idea was to announce the marriage to the general public of the city 
that if someone can solve the given problem he will be able to marry one of his daughters.
So, many became intersted in solving the problem. The problem is that the king will give the weight of a gold
coin W and the total number of gold coins needed to marry her daughters. D1 for first daughter, D2 for 2nd daughter, 
D3 for 3rd daugther. In reality, the first daughter's weight was total D1 coins weight, 2nd daughters weight was 
total D2 coins weight and 3rd daughters weight was total D3 coins weight.
A person who wants to solve the problem has to mention a Number M which has to be the weight of one the king's daughters.
But the king is very weak in math. He asked for your help to develop a code that will show which daughter to solver can
marry. If the solver gives a wrong number then the message "Kill him" will be shown.

Input: Five integers W,D1,D2,D3 & M representing the weight of a coin, gold coins needed to marry 1st, 2nd, 3rd daughters and the answer of the solver consecutively.

Output: Any of these four messages: "Will Marry 1st Daughter", "Will marry 2nd Daughter", "Will marry 3rd Daughter", "Kill him!" 

          Sample input                            Sample output
        5 50 20 30 1200                             Kill him!
*/

#include<stdio.h>
int main()
{
    int w,d1,d2,d3,m;
    scanf("%d %d %d %d %d",&w,&d1,&d2,&d3,&m);
    if(m==w*d1) printf("Will marry 1st Daugther.\n");
    if(m==w*d2) printf("Will marry 2nd Daugther.\n");
    if(m==w*d3) printf("Will marry 3rd Daugther.\n");
    else printf("Kill him!\n");
}