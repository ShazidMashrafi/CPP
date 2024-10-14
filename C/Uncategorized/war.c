/*A war broke out among different natives. Each nation tried to assign their best general to the front battle 
field among their X generals to be the victorious party. At the time of choosing their best general they
considered military rank points M for each of their generals. It is to be decided that the best military ranked
points general among all the Nations will ultimately be victorious. Now, your job is to find out the country which 
will be victorious among N Nations and the might of the nation's general.

Input: An integer number N that defines the number of Nations followed by N integers values each representing
the number of generals a nation X. After each X the military ranks M of their each general will be provided. 

                Sample input                                Sample output
                2                                           Nation 2 will be victorious.
                5                                           28
                27 17 25 15 12
                3
                16 28 4
*/


#include<stdio.h>
int main()
{
    int N[50],M[50],n,x,i,j,win,rank=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int highest=0;
        scanf("%d",&x);
        for(j=0;j<x;j++)
        {
            scanf("%d",&M[j]);
            if(highest<M[j]) 
            {
                highest=M[j];
            }
        }
        N[i]=highest;
        if(rank<N[i])
        {
            rank=N[i];
            win=i+1;
        }
    }
    printf("Nation %d will be victorious\n",win);
    printf("%d\n",rank);
}