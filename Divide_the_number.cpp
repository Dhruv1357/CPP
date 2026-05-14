/*
Problem - Divide the number
Platform - GeeksForGeeks
Summary - Finding the number of ways a number can be represented as a sum of 4 integers.
*/

#include <iostream>
using namespace std;

int countWays(int N) 
{
    // code here
    int count = 0;
    
    for(int i=1;i<N;i++)
    {
        if((i+i+i+i) > N)
        break;
        for(int j=i;j<N;j++)
        {
            if((i+j+j+j) > N)
            break;
            for(int k=j;k<N;k++)
            {
                if((i+j+k+k) > N)
                break;
                for(int l=k;l<N;l++)
                {
                    if((i+j+k+l) > N)
                    break;
                    if((i+j+k+l) == N)
                    count++;
                }
            }
        }
    }
    return count;
}
int main()
{
    int num;
    cin >> num;
    cout << countWays(num);
}