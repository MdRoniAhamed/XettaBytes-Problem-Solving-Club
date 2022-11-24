#include<bits/stdc++.h>
using namespace std;
void devisor(int num)
{
    for(int i=1; i<=num; i++)
    {
        int start, finish;
        scanf("%d %d",&start,&finish);
        int max = 0, count = 0;
        for (int j=start; j<= finish; j++)
        {
            int m = 0;
            for(int k=1; k*k<=j; k++)
            {
                if(k*k==j)
                {
                    m+=1;
                }
                else if(j%k == 0)
                {
                    m += 2;
                }
            }
            if(count < m)
            {
                max = j;
                count = m;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",start,finish,max,count);
    }

}
int main()
{
    int num;
    scanf("%d",&num);
    devisor(num);
    return 0;
}
